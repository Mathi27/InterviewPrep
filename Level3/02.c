/*
Get a number from user and subtract 5 to that number and print the
result. Write your code inside the function. Do not Change the format.
Testcase:
Input :45 Output 40.
Input:56789 Output:56784
*/
#include<stdio.h>
int subNumber(int val);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
   int res  = subNumber(num);
   printf("Output : %d\n",res);
}
int subNumber(int val){
    if(val < 5){
        return 5 - val;
    }
     return val - 5;
}