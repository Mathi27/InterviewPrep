// Get a two-digit number from user and print the ten’s digit.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter 2 digit Number : ");
    scanf("%d",&num1);
    int result = num1/10; // it will remove the last digit.
    printf("Output : %d\n",result);
    return 0;
}