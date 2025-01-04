// Get a three-digit number from user and print the ten’s digit.
#include<stdio.h>
int main(){
    int x;
    printf("Enter 2 Digit Number :");
    scanf("%d",&x);
    int unitDigitExtract = x%10; // it return the ones digit.
    int tensDigitExtract = x/10; // remove the ones digit.
    int result = unitDigitExtract + tensDigitExtract;
    printf("op: %d\n",result);
    return 0;
}