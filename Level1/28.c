/* 
Get a three-digit number from user. If the sum of the one’s digit and
hundred’s digit is less than 10, then print “Success”, otherwise print
“Failure”.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a Three Digit Number : \n");
    scanf("%d",&num);
    int hundredDigit = (num/100)%10;
    int tensDigit = (num/10)%10;
    int onesDigit = (num%10);
    int sumOfDigit = (onesDigit + hundredDigit);
    if(sumOfDigit < 10){
        printf("Success");
    }else{
        printf("Failure");
    }
    return 0;
}