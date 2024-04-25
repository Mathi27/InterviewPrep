/*  Write a loop program to print sum of 6 to 1. 
op: 21*/
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=6;i>0;i--){
       sum = sum + i;
    }
    printf("Sum of 6 to 1 is : %d\n",sum);
    return 0;
}