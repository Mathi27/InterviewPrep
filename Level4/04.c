/*
Get a Three digit number from user and print the digit in “Tens” position
User Enters “738”
Answer - 3
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int extractDigit = num%10;
    int tensDigit = (num/10)%10;
     printf("Tens Digit: %d\n",tensDigit);
}