/* Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7. */
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=10;i<100;i++){
        int tensDigit = (i/10)%10;
        if(i%2!=0 && tensDigit == 7){
           sum += i;     
        }
    }
    printf("%d\n",sum);
    return 0;
}