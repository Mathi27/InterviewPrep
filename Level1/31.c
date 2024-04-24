/*
Get a three-digit number from user.
If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum and print the sum.
Note: The result should be always single digit only.

TestCase :
Input: 123 – Output: 6
Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter Three Digit Number : ");
    scanf("%d",&num);
    int hundredsDigit = (num/100)%10;
    int tensDigit = (num/10)%10;
    int onesDigit = (num%10);
    int sumOfDigit = (hundredsDigit + tensDigit + onesDigit);
    if(sumOfDigit < 10){
        // If the sum of the digits is less than 10, then print the sum
        printf("Output : %d\n",sumOfDigit);
    }else{
        // otherwise add the digits of the sum and print the sum
        int sumOfHundredDigit = (sumOfDigit/100)%10;
        int sumOfTensDigit = (sumOfDigit/10)%10;
        int sumOfOnesDigit = (sumOfDigit%10);
        int result = (sumOfHundredDigit + sumOfTensDigit + sumOfOnesDigit);
        if(result >= 10){
            int sumOfResultTensDigit = (result/10)%10;
            int sumOfResultOnesDigit = (result%10);
            int result_of_digit = (sumOfResultTensDigit + sumOfResultOnesDigit);
            printf("Output :%d\n",result_of_digit);
        }else{
            printf("Output :%d\n",result);
        }
    }
}