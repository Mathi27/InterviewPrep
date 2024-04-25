// Write a loop program to print the two-digit odd numbers, below 20.
#include<stdio.h>
int main(){
    for(int i=10;i<20;i++){
        if(i%2!=0){
            printf("%d\n",i);
            continue;
        }
    }
}