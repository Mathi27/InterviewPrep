#include<stdio.h>
#include "math_lib.h"

static void add(int a, int b){
  printf("Add : %d\n",a+b);
}
static void sub(int a,int b){
  printf("Sub : %d\n",a-b);
}
static void mul(int a, int b){
  printf("Mul : %d\n",a*b);
}
static void div(int a,int b){
  printf("Div : %d\n",a/b);
}

typedef void (*func_ptr)(int,int);

func_ptr functionLib[4] = { &add , &sub , &mul , &div };

void execute_operation(int operation, int a , int b){
    functionLib[operation](a,b);

}