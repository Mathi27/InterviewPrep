// Get a number from user and subtract 5 to that number and print the result.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter a Number");
    scanf("%d",&num1);
    int res = num1-5;
    printf("Your Result is %d:",res);
    return 0;
}