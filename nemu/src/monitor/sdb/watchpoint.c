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

#include "sdb.h"

#define NR_WP 32

void sdb_mainloop();

typedef struct watchpoint {
  int NO;//监视点序号
  struct watchpoint *next;//指向下一个结构体的地址
  char *expr;//表达式
  uint32_t old;
  /* TODO: Add more members if necessary */
  //根据对监视点工作原理的理解在结构体中增加必要的成员

} WP;//监视点的结构体,简易调试器允许用户同时设置多个监视点, 删除监视点, 最好使用链表将监视点的信息组织起来

static WP wp_pool[NR_WP] = {};//使用"池"的数据结构来管理监视点结构体
static WP *head = NULL, *free_ = NULL;//head用于组织使用中的监视点结构，free_用于组织空闲的监视点结构

//init_wp_pool()函数会对两个链表进行初始化
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr=NULL;
    wp_pool[i].old=0;

  }
  //将head指针置为空，将free_指针指向监视点结构体数组的起始位置
  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */


static WP* new_wp(){
  assert(free_);//检查free_指针是否为空
  WP* ret=free_;//从空闲的监视点结构体链表中取出一个结构体
  free_=free_->next;//空闲列表头后移一位
  ret->next=head;//将取出的结构体添加到使用中的监视点结构链表的头部
  head=ret;//新的头
  return ret;
}

//1.找到要释放的监视点的前一个监视点，并将其与要释放的监视点的下一个监视点连接起来。
//2.最后，将要释放的监视点加入空闲监视点链表的头部（通过修改next指针和free_指针）
void free_wp(WP *wp){
  WP* h=head;
  //检查要释放的监视点是否是使用中的第一个监视点（即head指针指向它） 如果是将头制空
  if(h==wp){
    head=head->next;
  }
  else{
    while(h && h->next!=wp) h=h->next;
    assert(h);//h为空指针，即没有找到要释放的监视点的前一个监视点，那么断言会触发
    h->next= wp->next;   
  }
  wp->next=free_;
  free_=wp;//将要释放的监视点加入空闲监视点链表的头部
}

//监视点的值发生改变
void wp_difftest(){
  WP* h=head; 
  while(h){
    bool success;
    word_t new=expr(h->expr,&success);
    if(h->old!=new){
      
      printf("watchpoint%d:%s\nOld value=%u\nNew value=%u\n",h->NO,h->expr,h->old,new);
      h->old=new;
      nemu_state.state=NEMU_STOP;
    }
    h=h->next;

  }
}

//遍历监视点
void wp_list(){
  WP*h=head;
  if(!h){
    puts("No watchpoints.");
    return ;
  }
  printf("%-8s %-8s\n", "Num", "What");
  while(h){
    printf("%-8d %-8s\n", h->NO, h->expr);
    h = h->next;
  }
}

//设置监视点
void wp_watch(char *expr, word_t res) {
  WP* wp = new_wp();
  wp->expr = malloc(strlen(expr) + 1);
  strcpy(wp->expr, expr);
  wp->old = res;
  printf("Watchpoint %d: %s\n", wp->NO, expr);
}

//删除监视点
void wp_remove(int no) {
  assert(no < NR_WP);
  WP* wp = &wp_pool[no];
  free_wp(wp);
  printf("Delete watchpoint %d: %s\n", wp->NO, wp->expr);
}


//这两个函数会作为监视点池的接口被其它函数调用. 需要注意的是, 调用new_wp()时可能会出现没有空闲监视点结构的情况, 为了简单起见, 此时可以通过assert(0)马上终止程序. 框架代码中定义了32个监视点结构, 一般情况下应该足够使用, 如果你需要更多的监视点结构, 你可以修改NR_WP宏的值.
//这两个函数里面都需要执行一些链表插入, 删除的操作, 对链表操作不熟悉的同学来说, 这可以作为一次链表的练习