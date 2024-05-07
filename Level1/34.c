/* 
Get two 3-digit numbers from user. Print the difference between the one’s digit and
hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s
digit.
TestCase : 
Input: 856 978 – Output: 1
Input: 128 365 - Output: 2
*/
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 3 Digit Numbers : ");
    scanf("%d\t%d",&num1,&num2);
    int num1HundredsDigit = (num1/100)%10;
    int num1TensDigit = (num1/10)%10;
    int num1OnesDigit = (num1%10);
    int num2HundredsDigit = (num2/100)%10;
    int num2TensDigit = (num2/10)%10;
    int num2OnesDigit = (num2%10);

    if(num1TensDigit > num2TensDigit){
     //Edge case to handle output not to be negative.
       if(num1HundredsDigit > num1OnesDigit){
        int num1Diff_1 = num1HundredsDigit - num1OnesDigit;
             printf("Output %d\n",num1Diff_1);
       }else{
        int num1Diff_2 = num1OnesDigit - num1HundredsDigit;
             printf("Output %d\n",num1Diff_2);
       }
    }else{
        //Edge case to handle output not to be negative.
        if(num2HundredsDigit > num2OnesDigit){
            int num2Diff_1 = num2HundredsDigit - num2OnesDigit;
             printf("Output %d\n",num2Diff_1);
        }else{
            int num2Diff_2 = num2OnesDigit - num2HundredsDigit;
             printf("Output %d\n",num2Diff_2);
        }
        
       
    }
     
    
}