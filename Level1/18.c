/* Get a two-digit number from user and make the ten’s digit 1, then print it.
Input: 95 Output 15. 
Input: 82 Output: 12
 */
#include<stdio.h>
int main(){
    int num;
    printf("Enter a Two Digit Number : ");
    scanf("%d",&num);
    int res = (num%10)+10; 
    printf("Output : %d\n",res);
    return 0;
}