/*
Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Input: 56 78 – Output: 15
Input: 14 65 - Output: 11
*/
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 2 Digit Numbers :");
    scanf("%d %d",&num1,&num2);
    // sum of Digits 
    int num1TensDigit = (num1/10)%10;
    int num1OnesDigit = (num1%10);
    int num2TensDigit = (num2/10)%10;
    int num2OnesDigit = (num2)%10;
    int res_num1 = num1OnesDigit + num1TensDigit;
    int res_num2 = num2OnesDigit + num2TensDigit;
    if(res_num1 > res_num2){
        printf("Output : %d\n",res_num1);
    }else{
        printf("Output : %d\n",res_num2);
    }

}