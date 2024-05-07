/* Write a program to print biggest 4-digit number which is divisible by 7 and 9. */
#include<stdio.h>
int main(){
   int num;
start:
   printf("Enter a number : ");
   scanf("%d",&num);
   // digits check.
   int count = 0;
   int tempStoreValue = num;
   while(tempStoreValue!=0)
   {
    int extract = tempStoreValue % 10;
    count++;
    tempStoreValue = tempStoreValue / 10;
   }
   if(count !=4){
    printf("Enter only 4 digit number !\n");
    num = 0;
    tempStoreValue = 0;
    goto start;
   }else{
      if(num % 4 && num % 7){
          printf("%d is divisible by 4 and 7 \n",num);
      }else{
        printf("This number is not divisible by 4 and 7\n");
      }
   }
   return 0;
}
/* internet says it is bad practice to use goto statement. 
but the code does its job.
you can create a pull request for this in future.
Author: Mathi Yuvarajan.
*/