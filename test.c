#include<stdio.h>
int main(){

    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    int count=0;
      // 34 
    while (num !=0 )
    {
         int extractDigit = num % 10;
         // 5
         count++;
        
         num = num / 10;
    }
    printf("count value : %d\n",count);
}