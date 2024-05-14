/*
Get a Two digit number from the user and print the sum of all digits.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter Two Digit Number : ");
    scanf("%d",&num);
    int temp = num;
    int sum = 0;
    while (temp !=0)
    {
       int extractDigit = temp % 10;
       sum = sum + extractDigit ;
       temp = temp / 10;   
    }
    printf("Sum of All Digits : %d\n",sum);
    return 0;
}