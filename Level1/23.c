/* Get a two digit number from user and subtract 5 from that number if the
sum of the digits of the number is odd, then print the result. Do not use
“if”.

Input: 95 Output 95. Input: 72 Output: 67
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter 2 digit number :");
    scanf("%d",&n);
    // if sum of digits is odd, then subract 5 from it.
    int tensDigit = (n/10)%10;
    int onesDigit = (n%10);
    int result = (((tensDigit+onesDigit)&1) == 0)?n:n-5;
    printf("output : %d\n",result);

}