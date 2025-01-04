/* Function Pointers - III */
#include<stdio.h>

int function_1(int a , int b){
    return a + b;
}
int function_2(int a , int b){
    return a * b;
}

typedef int (*func_ptr)(int,int);

int main(){
   
     func_ptr pr;
     
     pr = &function_1;
     int res = pr(2,8);
      
    pr = &function_2;
    int res2 =  pr(10,2);
   
    printf("Result 1: %d\n",res);
    printf("Result 2: %d\n",res2);

    return 0;
}