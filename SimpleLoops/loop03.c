// Write a loop program to print sum of 1 to 5.
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=0;i<6;i++){
      sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}