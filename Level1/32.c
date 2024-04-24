/* 
Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
print the sum, otherwise print the difference.
TestCase:
Input: 56 78 – Output: 22
Input: 14 65 - Output: 79
*/
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 2 Digit Numbers: ");
    scanf("%d %d",&num1,&num2);
    int sum = num1 + num2;
    if(sum < 100){
        printf("output : %d\n",sum);
    }
    else {
        int diff = num2-num1;
        printf("output : %d\n",diff);
    }
    return 0;
}