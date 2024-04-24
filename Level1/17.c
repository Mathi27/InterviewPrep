/* Get a two-digit number from user and make the one’s digit as 0, then print it. 
Input: 95 Output 90. 
Input: 18 Output: 10
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter two digit number : ");
    scanf("%d",&num);
    int result = ((num%100)/10)*10;
    printf("Output : %d\n",result);
}
