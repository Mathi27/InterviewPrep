/*
Get a Three digit number from the user and print the sum of all digits.
*/
#include<stdio.h>
int main(){
    int number,sum  = 0;
    printf("Enter Three Digit Number :");
    scanf("%d",&number);
    while (number != 0)
    {
        int extractDigit = number % 10;
        sum = sum + extractDigit;
        number = number / 10;
    }
    printf("Sum : %d\n",sum);
}