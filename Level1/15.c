/*
Get a four-digit number from user and only reverse the 
first two digits of the number, then print the number.

Input: 9561 Output 9516. 
Input: 3859 Output: 3895.
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter four-digit number:  ");
    scanf("%d",&num);
    // Extracting Digits from its position
    int thousandPlace = (num%10000)/1000;
    int hundredPlace = (num%1000)/100;
    int tensPlace = (num%100)/10;
    int onesPlace = (num%10);
    // logic
    int lastDigit = thousandPlace * 1000;
    int secondLastDigit = hundredPlace * 100;

    int lastTwoDigits = lastDigit+secondLastDigit;

    int onesDigit = onesPlace * 10;
    int result = lastTwoDigits + onesDigit + tensPlace;
    // finalOutput
    printf("Output : %d\n",result);

    return 0;
}