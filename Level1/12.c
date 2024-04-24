// Get a three-digit number from user and print sum the digits.
#include<stdio.h>
int main(){
    int num;
    printf("Enter 3 Digit Number: ");
    scanf("%d",&num);
    int unitDigitExtract = num%10;
    int tensDigitExtract = (num/10)%10;
    int hundredDigitExtract = num/100;
    int res = unitDigitExtract + tensDigitExtract + hundredDigitExtract;
    printf("Output : %d\n",res);
}