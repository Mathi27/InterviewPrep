/*
Write a program get number from user print the total number of two-digit
perfect square numbers in the number.
Input: 163496481 - Output: 4
Input: 364925 - Output: 4
*/
#include<stdio.h>
int main(){
  int num,counter = 0;
  printf("Enter a number :");
  scanf("%d",&num);
  int remainingNumber;
  while (num!=0)
  {
     
     int lastDigit = num%10;
     int secondLastDigit = (num/10)%10;
     int sumOfBoth = (secondLastDigit * 10)+lastDigit;
     // now need to check if the number is a perfect square or not.
     // sum of both = 49 = 7 x 7 
     // edge case for skipping that 1 digit. 
    
     for(int i=1;i<10;i++){
          int squareOfnumbers = i*i;
          if(squareOfnumbers == sumOfBoth){
            /* I am using this case becz since question says only 2 digit. when the number is removed and
            at the end only one number wil be there so ,we should not calculate perfect square for that number.
            */ 
            if(remainingNumber < 10){
              continue;
            }
              counter++;
          }
     } 
     num = num/10; 
     remainingNumber = num;
  }
  printf("Output : %d\n",counter);
  
  return 0;
  
}