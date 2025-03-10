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
#include <memory/paddr.h>
static word_t eval_operand(int i,bool *success);
static word_t calc1(int op, word_t val, bool *success);
static word_t calc2(word_t val1, int op, word_t val2, bool *success);
//对不同类型的字符进行标记
enum { //定义了一些常量，其中包括TK_NOTYPE和TK_EQ等。这些常量用于表示不同的记号类型
  TK_NOTYPE = 256,//空格

  TK_POS, TK_NEG, TK_DEREF,//一元运算符： + - *

  TK_EQ, TK_NEQ, TK_GT, TK_LT, TK_GE, TK_LE,
  TK_AND,
  TK_OR,

  TK_NUM, // 10 & 16
  TK_REG
};


//定义正则表达式和记号类型的定义关系
static struct rule {//结构体rule，包含了正则表达式和记号类型的对应关系。这些规则会用于识别输入表达式中的记号
  const char *regex;//存储正则表达式的字符串
  int token_type;//表示与正则表达式匹配的记号的类型
} rules[] = {//存储多个规则。规则按照优先级顺序排列，优先级较高的规则先出现
  {" +", TK_NOTYPE},    // 空格
  {"\\+", '+'},         // 加法
  {"-", '-'},
  {"\\*", '*'},
  {"/", '/'},

  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},
  {"<", TK_LT},
  {">", TK_GT},
  {"<=", TK_LE}, 
  {">=", TK_GE},

  {"&&", TK_AND},
  {"\\|\\|", TK_OR},

  {"\\(", '('},
  {"\\)", ')'},

  {"(0x)?[0-9A-Fa-f]+", TK_NUM},
  {"\\$\\w+", TK_REG}
 
};

static int nop_types[] = {'(',')',TK_NUM,TK_REG}; // 不属于运算符号
static int op1_types[] = {TK_NEG, TK_POS, TK_DEREF}; // 一元运算符
static int bound_types[]={')',TK_NUM,TK_REG};//运算符的边界元素

static bool check_type(int type,int types[],int size){ //判断type是否在数组types内
  for(int i=0;i<size;i++){
    if(type==types[i])
      return true;
  }
  return false;
}

//NR_REGEX表示正则表达式的数量
#define NR_REGEX ARRLEN(rules) //#define ARRLEN(rules) (sizeof(rules) / sizeof((rules)[0]))
//这个宏利用了 C 语言中的操作符 sizeof 来计算数组的总字节数，然后除以单个元素的字节数，从而得到数组的元素数量。


//正则表达式数组re，用于存储编译后的正则表达式。
static regex_t re[NR_REGEX] = {}; 

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */

//init_regex()函数中，会对每个规则进行编译，并将编译后的结果存储在re数组中
void init_regex() { 
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
static Token tokens[2048] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;


//对给定的输入进行分词，以及正则表达式归类
static bool make_token(char *e) {//函数make_token(char *e)，用于对给定输入字符串进行分词
  int position = 0;//position用于追踪当前在输入字符串中的位置
  int i; //i作为循环计数器
  regmatch_t pmatch; //pmatch是一个结构体，用于存储匹配到的子字符串的信息
  nr_token = 0;//用于记录找到的标记数量
  //函数进入一个while循环，循环条件是尚未到达输入字符串的末尾（e[position] != '\0'）
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    //在循环内部，函数遍历一个包含正则表达式（re）和相应规则的数组。目标是找到当前位置在输入字符串中的匹配项,存入rules[i].token_type
    for (i = 0; i < NR_REGEX; i ++) {
      //使用regexec函数来执行正则表达式的匹配 ，整个表达式的结果是检查regexec函数的返回值是否等于0，即是否成功匹配
      //pmatch.rm_so表示表示匹配子串的起始位置（在原始字符串中的索引）,检查匹配子串是否从原始字符串的开头位置开始
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {           
        char *substr_start = e + position;//指针substr_start指向匹配到的子字符串在输入字符串中的起始位置
        int substr_len = pmatch.rm_eo;//定义一个整数substr_len，表示子字符串的长度
        //超过token规定的最大字符长度
        if (substr_len > 32){
          assert(0);
        }
        //打印匹配信息，包括规则的索引、正则表达式、位置和长度等
        /* Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);*/ 
        position += substr_len;
        //将position增加substr_len，以便在下次循环中继续处理下一个位置
        /* TODO: */
        if(rules[i].token_type==TK_NOTYPE) break;
        tokens[nr_token].type = rules[i].token_type;//把相应的token类型加入tokens
        switch(rules[i].token_type){
          case TK_NUM:
          case TK_REG:
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            break;
          //判断是否是单元运算符
          case '+': 
          case '-': 
          case '*':
            if(nr_token==0||!check_type(tokens[nr_token-1].type,bound_types,3)){
              switch(rules[i].token_type){
                case '+':tokens[nr_token].type=TK_POS; break;
                case '-':tokens[nr_token].type=TK_NEG; break;
                case '*':tokens[nr_token].type=TK_DEREF; break;
              }
            }
        }
        nr_token++;
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


//判断表达式是否被一对匹配的括号包围着, 同时检查表达式的左右括号是否匹配, 如果不匹配, 这个表达式肯定是不符合语法的
bool check_parentheses(int p, int q)
{
	if(tokens[p].type == '(' && tokens[q].type == ')')
	{
		int par = 0;
		for(int i = p; i <= q; i++)
		{
			if(tokens[i].type == '(') par++;
			else if(tokens[i].type == ')') par--;
			if(par == 0) return i == q;
		}
	}
	return false;
}

//寻找主运算
int find_major(int p, int q) {
  int ret = -1;//主运算符位置
  int par = 0;//括号数量
  int op_level = 0;//运算符等级
  int tmp_level=0;//更新运算符等级
  //遍历p到q
  for (int i = p; i <= q; i++) {
    //1.识别到‘（’ ，par++
    if (tokens[i].type == '(') {
      par++;
    }
    //2.识别到‘)’ ，par--
    else if (tokens[i].type == ')') {
      if (par == 0) { //遇到了（））的情况，说明表达式有问题
        return -1;
      }
      par--;
    } 
    //3.不属于运算符类型，直接跳过
    else if(check_type(tokens[i].type,nop_types,4)){
      continue;
    }
    //4.在括号内直接跳过,因为主运算符不会在括号内
    else if (par > 0) { 
      continue;//直接跳到i+1,直到遇到 ‘）’
    } 
    //5.括号外的情况
    else {
    tmp_level=0;
      switch(tokens[i].type){
        case TK_OR: tmp_level++;//7
        case TK_AND: tmp_level++;//6
        case TK_EQ: case TK_NEQ: tmp_level++;//5
        case TK_LT: case TK_GT: case TK_GE: case TK_LE: tmp_level++;//4
        case '+': case '-': tmp_level++;//3
        case '*': case '/': tmp_level++;//2
        case TK_NEG: case TK_DEREF: case TK_POS: tmp_level++; break;//1
        default: return -1;
      }
    //判断是否更新主符号的优先级以及位置 从左向右遍历 遇到更低或等于的优先级就进行更新 1 + -2
      if (tmp_level > op_level||(tmp_level==op_level&&!check_type(tokens[i].type,op1_types,3))) {
        op_level = tmp_level;
        ret = i;
      }
    }
  }
  if (par != 0) return -1;
  return ret;
}  


//递归运算函数
 word_t eval(int p, int q,bool *success) {
  *success=true;
  if (p > q) {//1.p>q直接返回错误
    *success=false;
    return 0;
  }
  else if (p == q) {//2.p=q判断是十进制数/十六进制数/寄存器
    return eval_operand(p,success);
  }
  else if (check_parentheses(p, q) == true) {//3.p>q判断是不是（表达式)这种标准格式，是的话把括号去掉
    return eval(p + 1, q - 1,success);
  }
  else {//4.p>q且已经去括号，进行递归运算
    int op =find_major(p,q);//寻找主运算符的位置
    if(op<0){//op<0,直接返回错误
      *success=false;
      return 0;
    }
    bool success1, success2;
    word_t val1 = eval(p, op-1, &success1);//左值
    word_t val2 = eval(op+1, q, &success2);//右值
    if (!success2) {//主运算符号右边为空，右边进入eval,属于1.p>q,直接置为错误 eg. 2+
      *success = false;
      return 0;
    }
    if (success1) {//2+2 左右都不为空 进行二元运算calc2 
      word_t ret = calc2(val1, tokens[op].type, val2, success);
      return ret;
    } else {//主运算符左边为空，则说明此时的主运算符是一元运算符 进行一元运算calc1 eg.-2
      word_t ret =  calc1(tokens[op].type, val2, success);
      return ret;
    }
  }
} 


//判断操作数的类型 十进制？十六进制？寄存器？
static word_t eval_operand(int i,bool *success){
  switch(tokens[i].type){
    case TK_NUM:
      *success=true;
      if(!strncmp("0x",tokens[i].str,2)){//判断是不是16进制 
        return strtol(tokens[i].str,NULL,16);//使用 strtol 函数将其解析为十六进制整数，并将结果作为函数的返回值
      }
      else{
        return strtol(tokens[i].str,NULL,10);//返回十进制整数
      }
      break;
    case TK_REG:
      *success=true;
      char *reg=strchr(tokens[i].str,'$')+1;
      return isa_reg_str2val(reg, success);
      break;
    default:
      *success=false;
      return 0;
  }
}

// 表达式进行一元运算
 static word_t calc1(int op, word_t val, bool *success){
  switch (op)
  {
  case TK_NEG: return -val;
  case TK_POS: return val;
  case TK_DEREF: return paddr_read(val, 4);
  default: *success = false;
  }
  return 0;
}

// 对表达式进行二元运算
static word_t calc2(word_t val1, int op, word_t val2, bool *success) {
  switch(op) {
  case '+': return val1 + val2;
  case '-': return val1 - val2;
  case '*': return val1 * val2;
  case '/': if (val2 == 0) {
              *success = false;
              return 0;
            } 
            return (sword_t)val1 / (sword_t)val2; // e.g. -1/2, may not pass the expr test
  case TK_AND: return val1 && val2;
  case TK_OR: return val1 || val2;
  case TK_EQ: return val1 == val2;
  case TK_NEQ: return val1 != val2;
  case TK_GT: return val1 > val2;
  case TK_LT: return val1 < val2;
  case TK_GE: return val1 >= val2;
  case TK_LE: return val1 <= val2;
  default: *success = false; return 0;
  }
}





//函数expr(char *e, bool *success)，用于对输入的表达式进行求值
word_t expr(char *e, bool *success) {
  if (!make_token(e)) { //首先TODO调用make_token()函数对表达式进行词法分析
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
  return eval(0,nr_token-1,success);
}



