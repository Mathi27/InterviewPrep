/* Write a loop program to print the two-digit even numbers, who’s sum of digits are 6. */
#include<stdio.h>
int main(){
    for(int i=10;i<100;i++){
        if(i%2 == 0){
            int tensPlace = (i/10)%10;
            int onesPlace = (i%10);
            int result = onesPlace + tensPlace;
            if(result == 6){
                printf("%d\n",i);
                continue;
            }
        }
    }
    return 0;
}