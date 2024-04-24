//Get a number from user and divide by the number by 8 and print the remainder.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number :  ");
    scanf("%d",&num1);
    int res = (num1%8);
    printf("Remainder : %d\n",res);
    return 0;
}