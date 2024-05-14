/*
Get a number from the user and print the reverse of it.
User Enters “123456”
Answer - 654321
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    while (number != 0)
    {
        int extractDigit = number %10;
        printf("%d",extractDigit);
        number = number/10;
    }
    printf("\n"); 
    return 0;
}