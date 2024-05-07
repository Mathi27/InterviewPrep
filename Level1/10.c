// Get a three-digit number from user and print the ten’s digit.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter Three Digit Number :");
    scanf("%d",&num1);
    // Remove the Unit Digit
    int unitDigit = num1/10; // removes the ones digit : 456-> it will remove the 6. so 45 will be stored in variable.
    int tensDigit = unitDigit%10; // it will extract the 45. in that -> extract the ones digit. since the previous ones digit has been deleted.
    printf ("Output : %d\n",tensDigit);
    return 0;
}