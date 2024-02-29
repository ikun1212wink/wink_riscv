/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

//对不同类型的字符进行标记
enum { //定义了一些常量，其中包括TK_NOTYPE和TK_EQ等。这些常量用于表示不同的记号类型
  TK_NOTYPE = 256, TK_EQ,TK_NOEQ,TK_AND,TK_OR,TK_NUMBER,TK_HEX

  /* TODO: Add more token types */

};




//定义正则表达式和记号类型的定义关系
static struct rule {//结构体rule，包含了正则表达式和记号类型的对应关系。这些规则会用于识别输入表达式中的记号
  const char *regex;//存储正则表达式的字符串
  int token_type;//表示与正则表达式匹配的记号的类型
} rules[] = {//存储多个规则。规则按照优先级顺序排列，优先级较高的规则先出现

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"!=", TK_NOEQ},      //No equal
  {"&&",TK_AND},        //and
  {"\\|\\|", TK_OR},    //or
  {"\\b[0-9]+\\b", TK_NUMBER},  //number
  {"0[xX][0-9a-fA-F]+",TK_HEX},    //十六进制 
  {"\\-",'-'},          //minus
  {"\\*",'*'},          //multiplication
  {"/",'/'},            //divisions
  {"\\(", '('},         // 左括号
  {"\\)", ')'}          // 右括号
};





//NR_REGEX表示正则表达式的数量
#define NR_REGEX ARRLEN(rules) //#define ARRLEN(arr) (sizeof(arr) / sizeof((arr)[0]))
//这个宏利用了 C 语言中的操作符 sizeof 来计算数组的总字节数，然后除以单个元素的字节数，从而得到数组的元素数量。






static regex_t re[NR_REGEX] = {}; //正则表达式数组re，用于存储编译后的正则表达式。





/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() { //init_regex()函数中，会对每个规则进行编译，并将编译后的结果存储在re数组中
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}



//存储子串的记号类型和具体内容
typedef struct token {//结构体token，表示词法分析得到的记号。它包含一个整数类型字段type和一个字符数组str，用于存储记号的类型和字符串值
  int type;
  char str[32];
} Token;



//定义了一个记号数组tokens和一个整数nr_token，用于存储分词后得到的token序列和token的数量
static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;





//对给定的输入进行分词，以及正则表达式归类
static bool make_token(char *e) {//函数make_token(char *e)，用于对给定输入字符串进行分词
  int position = 0;//position用于追踪当前在输入字符串中的位置
  int i; //i作为循环计数器
  regmatch_t pmatch; //pmatch是一个结构体，用于存储匹配到的子字符串的信息

  nr_token = 0;//用于记录找到的标记数量

  while (e[position] != '\0') {//函数进入一个while循环，循环条件是尚未到达输入字符串的末尾（e[position] != '\0'）
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
    //在循环内部，函数遍历一个包含正则表达式（re）和相应规则的数组。目标是找到当前位置在输入字符串中的匹配项
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
      //使用regexec函数来执行正则表达式的匹配 ，整个表达式的结果是检查regexec函数的返回值是否等于0，即是否成功匹配
      //&re[i]表示要匹配的正则表达式的地址（第i个正则表达式）
      //e + position表示要匹配的输入字符串的起始位置（从当前位置开始）
      //1表示最多匹配一个结果
      //&pmatch是一个存储匹配结果的结构体
      //0表示不使用任何标志位

      //pmatch.rm_so表示表示匹配子串的起始位置（在原始字符串中的索引）
      //判断 pmatch.rm_so == 0 的目的是检查匹配子串是否从原始字符串的开头位置开始。
      //如果 pmatch.rm_so 的值为 0，表示匹配子串的起始位置是原始字符串的开头，否则不是
       
        char *substr_start = e + position;//定义一个指针substr_start，指向匹配到的子字符串在输入字符串中的起始位置
        int substr_len = pmatch.rm_eo;//定义一个整数substr_len，表示子字符串的长度
        //pmatch.rm_eo 用于表示正则表达式匹配子串的结束位置（在原始字符串中的索引）

        //打印匹配信息，包括规则的索引、正则表达式、位置和长度等
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        //将position增加substr_len，以便在下次循环中继续处理下一个位置

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        Token token;//初始化token变量

        switch (rules[i].token_type) {
          case TK_NOTYPE:break;
          default: 
           strncpy(token.str, substr_start, substr_len);//使用strncpy函数将匹配到的子字符串复制到token.str中
           token.str[substr_len] = '\0'; //在末尾添加一个空字符
           token.type=rules[i].token_type;//将规则的类型赋值给token.type
           tokens[nr_token++] = token;
          break;
        }
        break;
      }
    }

    if (i == NR_REGEX) {//在循环中没有找到匹配项则表示在当前位置没有符合任何规则的标记。此时会打印一条错误消息，并返回false
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;//循环结束后，函数返回true，表示成功完成了分词过程
}










word_t expr(char *e, bool *success) {//函数expr(char *e, bool *success)，用于对输入的表达式进行求值
  if (!make_token(e)) { //首先调用make_token()函数对表达式进行词法分析
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}

void token_text(char *e){
  make_token(e);
}