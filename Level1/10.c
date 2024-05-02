// Get a three-digit number from user and print the ten’s digit.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter Three Digit Number :");
    scanf("%d",&num1);
    // Remove the Unit Digit
    int unitDigit = num1/10; // removes the ones digit
    int tensDigit = unitDigit%10; // extract the ones digit. since the previous ones digit has been deleted.
    printf ("Output : %d\n",tensDigit);
    return 0;
}