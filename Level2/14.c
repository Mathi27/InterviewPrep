/* 
Write a program to get a number from user and interchange the first and last digits and print the result.
*/
#include<stdio.h>
#include<math.h>
int main(){
  int num,count=0;
  printf("Enter a number : ");
  scanf("%d",&num);
  // extract the Last Digit
  int lastDigit = num%10; // it will extract the ones digit.
  
  // Calculate Number of Digits.
  int temp = num;
 int digits = 0;
  while (temp!=0)
  {
     digits++; // Count the Digit 
     temp = temp / 10; // remove the Digit  
  }
  // calculate First Digit.
  int firstDigit = num;
  // while condition check if there is more than one digit.
  while (firstDigit >= 10){ 
     firstDigit = firstDigit / 10; 
  }
  // Remove Last Digit:
  num = (num - lastDigit)/10; 
  // Remove First Digit : 
  int removeFirstDigit = pow(10,digits - 2);
  num = num%removeFirstDigit;

  // printing the  interchange of first and last digits
  printf("Output : %d%d%d\n",lastDigit,num,firstDigit);
  return 0;
}
 