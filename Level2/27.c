/*
Write a program to print the total count of numbers which are less than 100000 and 
whose sum of digits is 14.
*/
#include<stdio.h>
int func(int value);
int main(){
    int count = 0;
    for(int i=0;i<100000;i++){
        int x = func(i);
        if(x == 14){
            count ++ ;
        }    
    }
    printf("count: %d\n",count);

    return 0;
}
int func(int value){
    int sum =0;
     while (value!=0)
     {
        int lastDigit = value % 10;
        sum = sum + lastDigit;
        value = value / 10;
     }
     return sum;
}