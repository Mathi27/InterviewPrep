/*
Write a program to print the sum of all THREE digit odd numbers
*/
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=100;i<=999;i++){
        if(i%2 !=0){
           sum = sum + i;
        }
    }
    printf("Sum : %d\n",sum);
}