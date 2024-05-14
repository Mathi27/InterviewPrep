/*
Get a Four digit number from the user and print the sum of all digits.
*/
#include<stdio.h>
int main(){
    int number,sum=0,extractDigit ;
    printf("Enter a number : ");
    scanf("%d",&number);
    while (number!=0)
    {
       extractDigit = number % 10;
       sum = sum + extractDigit;
       number = number/10;
    }
    printf("Sum : %d\n",sum);
    
}