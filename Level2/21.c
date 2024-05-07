/*
Write a program get number from user print the total number digits
which are odd in the number.
Input : 12345678 - Output : 4
Input : 987531 - Output : 5
*/
#include<stdio.h>
int main(){
    int num,digits = 0,extractDigit;
    printf("Enter a number :");
    scanf("%d",&num);
    int tempStoreNum = num;
    while (tempStoreNum != 0)
    {
        extractDigit = tempStoreNum % 10;
         if(extractDigit % 2 != 0){
              digits++;
         }
         tempStoreNum  = tempStoreNum / 10;
    }
    printf("%d\n",digits);
    return 0;
}