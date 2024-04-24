/* Get a three-digit number from user and make the ten’s digit as 0, then print it. 
Input: 695 Output 605. 
Input: 182 Output: 102
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter three Digit Number : \n");
    scanf("%d",&num);
    //extract digit
    int hundredPlace = num%1000/100;
    int tensPlace = num%100/10;
    int onesPlace = num%10;
    int result = (hundredPlace * 100)+onesPlace;
    printf("Output:  %d\n",result);
    return 0;
}