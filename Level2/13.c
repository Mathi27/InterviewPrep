/* Write a program to get a number from user and print the reverse of that number
Testcase: 
Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576
 */
#include<stdio.h>
int main(){
    int num,digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    int array[10];
    while (num!=0)
    {
         digit = num%10; // digit extract.
         printf("%d",digit);
         num = num/10;
    }
    printf("\n");
    return 0;
     
    
}