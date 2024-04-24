// Get a three-digit number from user and print the one’s digit.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter three Digit Number : ");
    scanf("%d",&num1);
    int res = num1%10;   
    printf("Output : %d\n",res);
}