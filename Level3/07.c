/*
Get two numbers from user and compare the numbers. If same print
“Same” otherwise print “Not Same”. Write your code inside the function.
Do not Change the format.
Testcase:
Input: 123, 123 Output: Same.
Input: 56789,12345 Output: “Not Same”
*/
#include<stdio.h>
int compareTwoNumbers(int a,int b);
int main(){
    int num1,num2;
    printf("Enter 2 number : ");
    scanf("%d %d",&num1,&num2);
    int res = compareTwoNumbers(num1,num2);
    if(res){
        printf("Same\n");
    }else{
        printf("Not Same\n");
    }
    return 0;
}
int compareTwoNumbers(int a,int b){
      if(a == b){
        return 1;
      }
      return 0;
}