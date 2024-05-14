/*
Get a Three digit number from user and print the digit in “Hundreds” position
User Enters “738”
Answer - 7
*/
#include<stdio.h>
int main(){ 
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int extractDigit;
    while (num!=0)
    {
        extractDigit = num%10;
        num = num/10;
    }
    printf("Hundred Position : %d\n",extractDigit);


}