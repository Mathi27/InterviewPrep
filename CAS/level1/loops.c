#include<stdio.h>
// to print sum of digits.
int main(){

    int sum = 0; // initial sum value = 0
    for(int i=0;i<10;i++){
        sum = sum + i;
    }

   printf("Sum of Digit : %d\n",sum);
   return 0;
}