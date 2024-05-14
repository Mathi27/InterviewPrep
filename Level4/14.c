/*
Write a program to print the total number of single digit odd numbers
*/
#include<stdio.h>
int main(){
    int count = 0;
    for(int i=0;i<10;i++){
        if(i%2 != 0){
           count++;
        }
    }
    printf("total number of single digit odd numbers : %d\n",count);
}