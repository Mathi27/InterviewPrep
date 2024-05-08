/*
Get a number from user, find the number of digits and print the same.
*/
#include<stdio.h>
int findDigits(int val);
int main(){ 
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int result  = findDigits(num);
    printf("No of Digits : %d\n",result);
    return 0;
}
int findDigits(int val){
    int digits = 0;
    while (val !=0)
    {
        
         digits++;
         val = val/10;
    }
    return digits;
}