/* Write a program to get a number from user and print the sum of all digits.
Testcase : 
Input: 123456 - Output – 21
Input: 76895439 - Output – 51
Input: 675 – Output - 18
 */
#include<stdio.h>
int main(){
    int num,sum =0;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num!=0){
        // extract last digit
        int LastDigit = num%10;
        sum = sum + LastDigit;
        // remove the last digit 
        num = num/10;

         
      
    
    }
    printf("Sum of digit :%d\n",sum);
    
    return 0;
}