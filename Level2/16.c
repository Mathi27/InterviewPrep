/*
Write a program get number from user print whether that number is prime or not.
Input : 31 - Output : Prime
Input : 27 - Output : Not Prime.
*/
#include<stdio.h>
int main(){
    int num; 
    printf("Enter a number from user to check for prime or not prime : ");
    scanf("%d",&num);
    
    int counter = 0;
    for(int i=1;i<=(num/i);i++){
       if(num % i == 0){
           counter++;
           // if the number is same then it have only one factor. ex: 6 x 6
           if((num/i)!=i){
             counter++;
           }
       }
      
    }
     if(counter == 2){
        printf("Prime\n");
       }else{
        printf("Not Prime\n");
       }
    return 0;
}