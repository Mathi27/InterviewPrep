/*
Write a program to print the sum of all TWO digit odd numbers
*/
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=10;i<100;i++){
        if(i%2 !=0){
            sum = sum + i;
            continue;
        }
    }
    printf("Sum : %d\n",sum);

}
