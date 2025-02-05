#include<stdio.h>
// control flow
int main(){
    int age = 18;
    char voterID = 'Y';
    if(age > 18){


        if(voterID == 'Y'){
            printf("You can vote");
        }else{
            printf("You can't vote");
        }


    }else{
        printf("You can't vote");
    }
    return 0;
}