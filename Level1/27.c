/* 
Get a three-digit number from user. If the sum of the one’s digit and
hundred’s digit is less than 10, then print “Success”, otherwise print
“Failure”.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter 3 Digit Number :");
    scanf("%d",&num);

    int hundredDigit = num%1000/100;
    int tensDigit = num%100/10;
    int onesDigit = num%10;
    int sum = onesDigit+tensDigit;
    if(sum<10){
        printf("Success\n");
    }else{
        printf("Failure\n");
    }
}