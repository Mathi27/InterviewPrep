/*
Get a Two digit number from the user and print the reverse of it.
User Enters “73”
Answer - 37
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int temp = num;
    while (temp !=0)
    {
        int extractDigit = temp%10;
        printf("%d",extractDigit);
        temp /= 10;

    }
    printf("\n");
    return 0;
}