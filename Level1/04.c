// Get a number from user and divide by the number by 6 and print the quotient.
#include<stdio.h>
int main(){
   int num1;
   printf("Enter a number: \t");
   scanf("%d",&num1);
   int result = (num1 / 6);
   printf("quotient: %d\n",result);
   return 0;
}