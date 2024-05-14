/* Write a program to print the total number of TWO digit odd numbers. */
#include<stdio.h>
int main(){
    int count = 0;
    for(int i=10;i<100;i++){
        if(i%2 !=0){
            count++;
        }
    }
    printf("Total number of TWO digit odd numbers : %d\n",count);
}