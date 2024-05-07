/*
Write a program get number from user print the total number of two-digit
odd numbers in the number.
Test Case 1:
Input: 12345678
Output: 3
Explanation: In the input number 12345678, there are three two-digit odd numbers: 13, 35, and 57.

Test Case 2:
Input: 987531
Output: 4
Explanation: In the input number 987531, there are four two-digit odd numbers: 98, 87, 75, and 53.
*/
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the number :");
    scanf("%d",&num);
    while (num > 10)
    {
        int lastDigit = num%10;
        int secondLastDigit = (num/10)%10;
        int twodigitNumber =  (secondLastDigit * 10) + lastDigit;

        if(twodigitNumber % 2 != 0){
            count++;
        }
        num = num/10;
    }
    printf("Total number of two-digit odd numbers: %d\n",count);
}