/*
Get a number from user and Check Prime or Not and print the result.
Write your code inside the function. Do not Change the format.
*/
#include<stdio.h>
int checkPrime(int val);
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(checkPrime(num)){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}

int checkPrime(int val){
    int count = 0;
    for(int i=1;i<(val/i);i++){
        if(val%i == 0){
           count++;
           if((val/i)!=i){
            count++;
           }
        }
    }
    if(count == 2){
            return 1;
        }
        return 0;
}