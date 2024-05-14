/*
Get a number from the user and print the sum of all digits.
*/
#include<stdio.h>
int main(){
    int num,extractDigit,sum =0;
    printf("Enter a number :");
    scanf("%d",&num);
    while (num!=0)
    { 
         extractDigit = num % 10;
         sum = sum + extractDigit;
         num = num / 10;
    }
    printf("Sum : %d\n",sum);

    
}