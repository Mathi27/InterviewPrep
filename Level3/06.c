/*
Get a number from user and reverse that number and print. Write your
code inside the function. Do not Change the format.
*/
#include<stdio.h>
void reverseNumber(int n);
int main(){
    int num;
    printf("Enter a num :");
    scanf("%d",&num);
    reverseNumber(num);
    return 0;
}
void reverseNumber(int n){
    while (n!=0)
    {
       int extract = n%10;
       printf("%d",extract);
       n = n/10;
    }
    printf("\n");
}