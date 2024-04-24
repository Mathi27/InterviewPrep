// Get a number from user and add 2 to that number and print the result.
#include<stdio.h>
int main(){
   int num1,num2;
   printf("Enter a number :\n");
   scanf("%d",&num1);
   num2 = 2;
   int result = num1 + num2;
   printf("Output : %d\n",result);
   return 0;
}