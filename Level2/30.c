/*
Write a program to get two numbers from user and print the HCF of those numbers.
Input : 68 4 , Output : 4
*/
#include<stdio.h>
int checkSmall(int value1,int value2);
int main(){
    int num1,num2,HCF;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&num1,&num2);
    int min = checkSmall(num1,num2);
    for(int i=1;i<=min;i++){
        if(num1%i ==0 && num2%i == 0){
            HCF = i;
        }
    }
   printf("HCF :%d\n",HCF);
}
int checkSmall(int value1,int value2){
    if(value1 < value2){
        return value1;
    }else{
        return value2;
    }
}