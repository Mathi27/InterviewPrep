/*
Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is equal to 10, and one of the digits is more than 7 then
print “Success”, otherwise print “Failure”.

Input: 4649 – Output: Failure.
Input: 9286 - Output: Success.
*/
#include<stdio.h>
int main(){
  int number;
  printf("Enter 4 Digit Number :");
  scanf("%d",&number);
  int hundredsDigit = (number/100)%10;
  int tensDigit = (number/10)%10;
  int onesDigit = (number%10);
  int sumOfDigit = (tensDigit + hundredsDigit);
  if( (sumOfDigit == 10) && ((tensDigit>7) || (hundredsDigit>7)) ){
    printf("Success\n");
  }else{
    printf("Failure\n");
  }
   
  
}