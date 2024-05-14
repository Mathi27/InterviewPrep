/*
Get a Three digit number from user and print the digit in “Ones” position
*/
#include<stdio.h>
int main(){
     int num;
     printf("Enter Three Digit Number :");
     scanf("%d",&num);
     int extractDigit = num%10;
     printf("Ones Digit : %d\n",extractDigit);

}