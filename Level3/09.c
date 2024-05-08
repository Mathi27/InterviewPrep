/*
Get a two-digit number from user swap the digits.
Testcase:
Input: 34 Output: 43.
Input: 56 Output: 65
*/
#include<stdio.h>
int countDigit(int val);
int swapDigits(int val);
int main(){
     int number;
     start:
     printf("Enter Two Digit Number :");
     scanf("%d",&number);
     int noOfDigit = countDigit(number);
     if(noOfDigit == 2){
        int res = swapDigits(number);
        printf("Swapped Digits: %d\n",res);
     }else{
         goto start;
     }
      return 0;
}
// handle edge case: becz we need only 2 numbers.not more than 2.
int countDigit(int val){
    int counter  = 0;
    while (val!=0)
    {
    int extract = val %10;
    counter++;
    val = val/10;
    }
    
    return counter;
}
int swapDigits(int val){
    int extractLastDigit = val % 10; // 45; 
    int extractSecondLastDigit = (val/10)%10; // 5 X10 +4: 54.
    int result = (extractLastDigit*10)+extractSecondLastDigit;
    return result;
}