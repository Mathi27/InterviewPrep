/*
Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is greater than 10, then print “Success”, otherwise print
“Failure”.
Input: 7529 – Output: Failure. 
Input: 9386 - Output: Success.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter 4 Digit Number :");
    scanf("%d",&num);
    int hundredDigit = (num/100)%10;
    int tensDigit = (num/10)%10;
    int sumOfDigit = (tensDigit + hundredDigit);
    if(sumOfDigit>10){
        printf("Success\n");
    }else{
        printf("Failure\n");
    }
    return 0;
}