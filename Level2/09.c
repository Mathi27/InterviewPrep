/* Write a loop program to print the sum of two-digit numbers whose one’s digit is 5. */
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=10;i<100;i++){ 
        int onesDigit = i%10;
       if(onesDigit == 5){
         sum = sum + i;
         
       }        
         
    }
    printf("%d\n",sum);
}