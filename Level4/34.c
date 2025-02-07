#include<stdio.h>
// count num of zeros.
int main(){
    int num;
    printf("Enter the number: ") ;
    scanf("%d",&num);
    
    int count = 0;
    while(num != 0){
        int rem = num % 10;
        if(rem == 0){
            count++;
        }
        num = num / 10;
    }
    printf("Count Value : %d  ",count);
    
}