/* Write a program to get a number from user print the total number of
digits in that number */
#include<stdio.h>
int main(){
    int num , count = 0;
    printf("Enter any Number : ");
    scanf("%d",&num);
    while(num!=0){
      num = num/10;
      count++;
    }
    printf("No of Digits : %d\n",count);
}