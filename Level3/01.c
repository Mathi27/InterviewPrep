/*
Get a number from user and add 2 to that number and print the result.
Write your code inside the function. Do not Change the Code.
Testcase :
Input :45 Output 47.
Input:56789 Output:56791
*/
#include<stdio.h>
int addNumber(int value);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int returnedValue = addNumber(num);
    printf("output : %d\n",returnedValue);

}
int addNumber(int value){
    int result = value + 2;
    return result;
}