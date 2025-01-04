/* Function Pointers 

a pointer to code .

 */
#include<stdio.h>
void function_1(){
   
   printf("Function 1 Instruction is READ\n");

}

void function_2(){
     
     printf("Function 2 Instruction is READ\n");

}

int main(){

   void (*func_ptr)(); // This is a function pointer

   func_ptr = &function_1;
   func_ptr();
   
   func_ptr = &function_2;
   func_ptr();

   return 0;

}

