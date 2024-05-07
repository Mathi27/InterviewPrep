/**
Write a program to get a number from user, print whether that number is
prime, and sum of digit is equal to 14.
Test Case: 
Input: 59 - Output: Prime & Sum of Digits is 14
Input: 77 - Output: Not Prime but sum of digits is 14
Input: 13 - Output: Prime, but sum of Digits is not 14
*/
#include<stdio.h>
int main(){
  
    int num,counter=0,sum = 0,digits =0;
    printf("Enter the number  :");
    scanf("%d",&num);
    // sum of digits.
    int tempStoreNumber = num;
    int extractedValue;
    while (tempStoreNumber!=0)
    {
         extractedValue =  tempStoreNumber % 10;
         sum = sum + extractedValue;
         tempStoreNumber = tempStoreNumber / 10;
    }
    // Check for prime.
    for(int i=1;i<=(num/i);i++){
        if(num%i == 0){
            counter++;
            if((num/i)!=i){
               counter++;
            }
        }
    }
    if(counter == 2 && sum == 14){
        printf("Prime & Sum of Digits is 14\n");
    }else if(counter !=2 && sum == 14){
        printf("Not Prime but sum of digits is 14\n");
    }else if(counter == 2 && sum!=14){
        printf("Prime but Sum of Digits is not 14\n");
    }else{
         printf("Not Prime and sum of digits is Not 14\n");
    }
    return 0;
}