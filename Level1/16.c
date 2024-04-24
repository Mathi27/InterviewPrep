//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
// Input: 9561 Output 5961. Input: 3859 Output: 8359
#include<stdio.h>
int main(){
   int num;
   printf("Enter 4 Digit Number :");
   scanf("%d",&num);
   
   // Digit Extraction.
   int thousandPlace = (num%10000)/1000;
   int hundredPlace = (num%1000)/100;
   int tensPlace = (num%100)/10;
   int onesPlace = (num%10);
   // To Reverse the Last Two Digits.
   int res1 = hundredPlace * 1000;
   int res2 = thousandPlace * 100;
   int res3 = tensPlace * 10;
   int finalResult = res1+res2+res3+onesPlace;
   printf("Output : %d\n",finalResult);
}