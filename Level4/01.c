/* 
Question: Get a Two-digit number from user and print the digit in “Ones” position
Example: User Enters “78”
Answer - 8
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter 2 Digit Number :");
    scanf("%d",&n);
    int onesDigit = n%10;
    int tensDigit = (n/10)%10;
    printf("ones Digit = %d\n",onesDigit);
}