/*
Write a program get number from user print the total number of single-
digit perfect square numbers in the number.

Input: 123456789 - Output: 3
Input: 987531 - Output: 2
*/
#include<stdio.h>
int main(){
    int num,count = 0;
    printf("Enter a number :");
    scanf("%d",&num);
  
    while (num!=0)
    {
        int lastDigit = num % 10;
        // 9 x9 = 91
        int squareOfNumber = lastDigit * lastDigit;
        // printf("suqare : %d",squareOfNumber);
        if(squareOfNumber < 10){
            count++;
            //    printf("debug here 2");
        }
        num = num/10;
        
    }
    // printf("debug here");
    printf("Output : %d\n",count);
      return 0;
}