#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


//计算一个字符的长度
size_t strlen(const char *s) {
    if(s==NULL){
      return 0;
    }
    size_t n=0;
    while(s[n]!='\0'){
      ++n;
    }
    return n;
}

//将一个字符串复制到另一个字符串
char *strcpy(char *dst, const char *src) {
    if (src == NULL || dst == NULL) {   // 没有所指，直接返回dst
      return dst;
    }
  // 当成指向字符数组处理，所以即使没有空字符，导致内存访问越界，或修改了其他有用的数据也不管，因为这是函数调用者所需要保证的，下面一些string函数都是这样对带非字符串数组
    char *res = dst;
    do {
      *dst = *src;
      dst++;
      src++;
    } while(*src != '\0');  
    *dst='\0';
    return res;
} 

//字符串部分复制
char *strncpy(char *dst, const char *src, size_t n) {
    size_t i=0;
    for(i=0;i<n && src[i]!='\0';i++){
        dst[i]=src[i];
    }
    for (; i < n; i++) {
        dst[i] = '\0';
    }
    return dst;
} 

//将源字符串连接到目标字符串的末尾
char *strcat(char *dst, const char *src) {
    char *res=dst;
    //将目标字符串指针移动到末尾
    while(*dst!='\0'){
        dst++;
    }
    //追加源字符串到目标字符串末尾
    while(*src!='\0'){
        *dst=*src;
        dst++;
        src++;
    }
    //添加结束符号‘\0’
    *dst='\0';
    return res;
}

//用于比较两个字符串的内容
int strcmp(const char *s1, const char *s2) {
    size_t i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]>s2[i]){
            return 1;
        }
        else if(s1[i]<s2[i]){
            return -1;
        }
        else 
            i++;
    }
    if(s1[i] != '\0' && s2[i] == '\0')
	    return 1;
    if(s1[i] == '\0' && s2[i] != '\0')
	    return -1;
    else  
      return 0;
}

//比较两个字符串的前几个字符的内容
int strncmp(const char *s1, const char *s2, size_t n) {
  while(n--)
	{
		if(*s1 > *s2)
			return 1;
		if(*s1 < *s2)
			return -1;
		s1++;
		s2++;
	}
	return 0;
 
}

//将指定的内存区域的每个字节都设置为特定的值
void *memset(void *s, int c, size_t n) {
    char *ch=(char *)s;
    while(n--){
        *ch++=c;
    }
    return s;
}


//用于在内存中移动一块数据。与 memcpy 函数不同，memmove 能够处理源内存区域与目标内存区域重叠的情况，以确保数据正确移动
void *memmove(void *dst, const void *src, size_t n) {
  if(dst < src){
	  char *d = (char *) dst;
	  char *s = (char *) src;
	  while(n--)
	  {
		  *d = *s;
		  d++;
		  s++;
	  }
  }
  else
  {
	  char *d = (char *) dst + n - 1;
	  char *s = (char *) src + n - 1;
	  while(n--)
	  {
		  *d = *s;
		  d--;
		  s--;
	  }
  }
  return dst;
}

//将一个内存区域的内容复制到另一个内存区域
void *memcpy(void *out, const void *in, size_t n) {
    char *d=(char *)out;
    char *s=(char *)in;
    while(n--){
        *d=*s;
        d++;
        s++;
    }
    return out;
}

//比较内存内容是否相等
int memcmp(const void *s1, const void *s2, size_t n) {
    char *S1=(char *)s1;
    char *S2=(char *)s2;
    while(n--){
        if(*S1 > *S2)
		  return 1;
	    if(*S1 < *S2)
		  return -1;
	    S1++;
	    S2++;
    }
    return 0;
}

#endif
