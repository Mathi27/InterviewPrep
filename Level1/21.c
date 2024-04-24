/* Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”. 

*/
#include<stdio.h>
int main(){
     
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int result =  (num & 1) ? (num -5) : num;
    printf("Result: %d\n", result);
    return 0;
}
