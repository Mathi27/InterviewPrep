// Get a two-digit number from user and print the reverse of the number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter 2 Digit Number :");
    scanf("%d",&num);
    int unitDigitExtraction = num%10; // unit digit extraction -> 34 
    int tensDigitExtraction = num/10; // remove unit digit. so tens digit become unit digit.
    int result = (unitDigitExtraction * 10)+ tensDigitExtraction;
    printf("Output : %d\n",result);
}