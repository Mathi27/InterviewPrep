/**
Write a program get number from user print the total number of single-
digit prime numbers in the number.
TestCase:
Input: 163496481 - Output: 1
Input: 364925 - Output: 3

First 20 primes are : 
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 9
*/
#include<stdio.h>
int isPrime(int value);
int main(){
    int num,lastDigit,secondLastDigit;
    printf("Enter a number :");
    scanf("%d",&num);
    int tempNumStore = num;
    int countOfPrime =0;
    while (tempNumStore!=0)
    {      
      lastDigit = tempNumStore%10;
       if(isPrime(lastDigit)){
            countOfPrime++;
       }  
       tempNumStore = tempNumStore / 10;   
    } 
    
    printf("Output : %d\n",countOfPrime);
    return 0;
}
int isPrime(int value){
    int counter = 0;
    
    for(int i=1;i<=(value/i);i++){
        if(value%i == 0){
            counter++;
            if((value/i)!=i){
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
 