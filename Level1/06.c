// Get a two-digit number from user and print the one’s digit.
#include<stdio.h>
int main(){
   int num1;
   printf("Enter a number : ");
   scanf("%d",&num1);
   int res = num1 % 10;
   printf("One's Digit : %d\n",res);
}