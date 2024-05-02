// Get a three-digit number from user and print the hundred’s digit.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter 3 Digit Number :");
    scanf("%d",&num1);
    int res = num1/100; // it will remove both tens and ones digit.
    printf("Output : %d\n",res);
    return 0;
}