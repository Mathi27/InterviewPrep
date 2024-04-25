/* Write a loop program to print odd numbers 1 to 9. */
#include<stdio.h>
int main(){
    for(int i=0;i<10;i++){
        if(i%2 != 0){
            printf("%d\n",i);
            continue;
        }
    }
    return 0;
}