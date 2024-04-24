/* Get a three-digit number from user and subtract 5 from that number if
one’s digit number and 100’s digit number are same, then print the
result. Do not use “if”.

Input: 595 Output 590.
Input: 372 Output: 372
 */
#include<stdio.h>
int main(){
    int num;
    printf("Enter 3 Digit Number : \n");
    scanf("%d",&num);
    int hundredPlace = (num/100)%10;
    int tensPlace = (num/10)%10;
    int onesPlace = (num%10);
    int res = (onesPlace == hundredPlace)?num-5:num;
    printf("Output %d\n",res);
    return 0;
}