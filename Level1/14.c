// Get a three-digit number from user and print the reverse of the number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter 3 Digit Number : ");
    scanf("%d",&num); // 156 -> op: 651
    int hundred = num/100; // 1
    int tens = ((num/10)%10)*10; // 5*10 = 50
    int ones = (num%10)*100; // 6 * 100 = 600
    int result  = ones + tens + hundred;
    printf("output : %d\n",result);
}