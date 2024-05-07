/* Get two 3-digit numbers from user.
Add the one’s digit and hundred’s digit of both the numbers. 
Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.

Input: 856 978 – Output: 24
Input: 128 365 - Output: 11

*/
#include<stdio.h>
int main(){
    int num1,num2;  
    printf("Enter Two 3 Digit Numbers : ");
    scanf("%d %d",&num1,&num2);

    int num1HundredsDigit = (num1/100)%10;
    int num1TensDigit = (num1/10)%10;
    int num1OnesDigit = (num1%10);
    int num2HundredsDigit = (num2/100)%10;
    int num2TensDigit = (num2/10)%10;
    int num2OnesDigit = (num2%10);
    // Add the one’s digit and hundred’s digit of both the numbers
    int sumOfFirstNumber = num1OnesDigit + num1HundredsDigit;
    int sumOfSecondNumber = num2OnesDigit + num2HundredsDigit;
    if(sumOfFirstNumber > sumOfSecondNumber){
         int sum_of_firstNumber_Digits = num1OnesDigit+num1HundredsDigit+num1TensDigit;
         printf("Ouput :%d\n",sum_of_firstNumber_Digits);
    }else{
         int sum_of_SecondNumber_Digits = num2OnesDigit + num2TensDigit + num2HundredsDigit;
         printf("Output : %d\n",sum_of_SecondNumber_Digits);
    }
    return 0;
}