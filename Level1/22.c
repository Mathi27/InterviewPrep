/* Get a number from user and subtract 5 from that number if the number’s 
ten’s position digit is odd, then print the result. Do not use “if”.  

 Input: 685 Output 685. 
 Input: 89172 Output: 89167
 */
#include<stdio.h>
int main(){
    
    printf("Enter the Number from user: ");
    int num;
    scanf("%d",&num);
    
    int tensPosition= (num/10)%10;
    int subractRes =  ((tensPosition & 1) == 0)?  num:num-5 ;
    printf("%d\n",subractRes);
    


    return 0;
}