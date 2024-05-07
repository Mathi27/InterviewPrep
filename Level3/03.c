/*
Get a number from user and Check whether the sum of digits is 14 and
print the result. Write your code inside the function. Do not Change the
format.

Input: 59 Output: Sum of Digits is 14.
Input :123 Output: Sum of digits is not 14
*/
#include<stdio.h>
int checkSum(int value);
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int res = checkSum(num);
    if(res == 14){
        printf("Sum of Digits is %d\n",res);
    }else{
        printf("Sum of digits is not 14\n");
    }
    return 0;
}
int checkSum(int value){
    int sum = 0;
    while (value!=0)
    {
        int extract = value%10;
        sum = sum + extract;
        value  = value/10;
    }
     return sum;
    
}