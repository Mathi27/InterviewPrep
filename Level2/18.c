/*
Write a program to get number from user, print whether that number’s
first two digits (ten’s digits and one’s digit) is prime.
Testcase :
Input: 359 - Output: Prime
Input: 3577 - Output: Not Prime
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    int onesDigit = num % 10;
    int tensDigit = (num/10)%10;
    int combine = tensDigit * 10;
    int resultedNumber = combine + onesDigit;
    
    int counter =0;
    for(int i=1;i<=(resultedNumber/i);i++){
        if(resultedNumber%i == 0){
            counter++;
           if((resultedNumber/i)!=i){
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