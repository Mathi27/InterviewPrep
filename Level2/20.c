/*
Write a program print total number of single digit Prime numbers
Expected Output : 4.
*/
#include<stdio.h>
int isPrime(int val);
int num ,primeNumberCount = 0;
int main(){
 
    for(int i=0;i<10;i++){
        int value = isPrime(i);
        if(value == 1){
           primeNumberCount++;
        }
    }
    printf("Number of single digit prime numbers: %d\n",primeNumberCount);
    
    return 0;
}
int isPrime(int val){
    int counter = 0;
     for(int i=1;i<=(val/i);i++){
        if(val%i==0)
        {
            counter++;
            if((val/i)!=i)
            {
                counter++;
        
            }
        }
     }
     if(counter == 2){
        return 1;
     }else{
        return 0;
     }
}