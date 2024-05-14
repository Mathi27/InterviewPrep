/*
Get a Two digit number from user and print the digit in “Tens” position
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter Two Digit Number :");
    scanf("%d",&number);
    int extractDigit = number % 10;
    int tensDigit = (number/10)%10;
    printf("TensDigit : %d\n",tensDigit);
}