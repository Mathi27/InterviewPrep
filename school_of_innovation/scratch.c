#include<stdio.h>
int main(){
    int N = 5;
    int sum = 0;
    for (int i=0;i<=N;i++){
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is %d\n",N,sum);

    return 0;
    
}