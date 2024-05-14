/*
Get a Four digit number from the user and print the reverse of it.
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter 4 Digit number :");
    scanf("%d",&num);
    while (num!=0)
    {
        int extractDigit = num %10;
        printf("%d",extractDigit);
        num /= 10;
    }
    printf("\n");
    
}