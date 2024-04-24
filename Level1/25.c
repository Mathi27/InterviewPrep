/*
Get a four-digit number from user and subtract 5 from that number if
ten’s digit position and 100’s digit position is same, then print the result.
Do not use “if”.
Input: 7595 Output 7595. 
Input: 3772 Output: 3767
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a 4 Digit Number :");
    scanf("%d",&num);
    int thousandsDigit = (num/1000)%10;
    int hundredsDigit = (num/100)%10;
    int tensDigit = (num/10)%10;
    int onesDigit = (num%10);
    int result = (tensDigit == hundredsDigit)?num-5: num;
    printf("Output : %d\n",result);
    return 0;
}