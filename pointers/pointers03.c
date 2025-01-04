#include<stdio.h>

int main(){
  
   int i = 10;

   printf("i: %d, &i: %p ,*&i :%d ,*&*& : %d , *&*&*&*& : %d",i,&i,*&i,*&*&i,*&*&*&*&i );
   printf("\n");
   i = 20;
   printf("i: %d, &i: %p ,*&i :%d ,*&*& : %d , *&*&*&*& : %p\n",i,&i,*&i,*&*&i,*&*&*&*&i );

/**
 * 
 * *&i : star and & : will cancel the * and & only i remains.
 * when we use  * and & they will cancel out each other.
 * 
 */











    return 0;
}