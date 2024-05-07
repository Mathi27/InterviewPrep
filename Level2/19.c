/*
Write a program to get a 4-digit number from user, print whether that
number’s middle two digits (hundred’s digit and ten’s digit) is prime.
Input: 6359 - Output: Not Prime
Input: 5738 - Output: Prime
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a 4 Digit number :");
    scanf("%d",&num);
    int tensDigit = (num/10)%10;
    int hundredDigit = (num/100)%10;
    int combineNum  = hundredDigit * 10;
    int newNumber = combineNum + tensDigit;
    int counter = 0;
    for(int i=1;i<=(newNumber/i);i++){
        if(newNumber%i == 0){
             counter++;
        if((newNumber/i)!=i){
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