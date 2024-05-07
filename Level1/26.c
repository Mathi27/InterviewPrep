/* Get a three-digit number from user. If the sum of the digits is 10 then
print “Success”, otherwise print “Failure”.*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter Three Digit Number :");
    scanf("%d",&num);
    int hundredDigit = (num/100)%10;
    int tensDigit = (num/10)%10;
    int onesDigit = num%10;
    int result = (hundredDigit + tensDigit + onesDigit);
    if(result == 10){
        printf("Success\n");
    }else{
        printf("Failure\n");
    }

    return 0;
}