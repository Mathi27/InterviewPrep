/*
Task : 
Input : 5 , Output : Five
Input : 8 , Output : Eight
Input : 55 , Output : Greather than 9
*/
#include<stdio.h>
 
int main(){
    printf("Enter a number :");
    int num;
    scanf("%d",&num);

    // count the digit.
   int tempNum = num;
   int digits = 0;
    while (tempNum!=0)
    {
       int extractDigit = tempNum%10;
       digits++;
       tempNum = tempNum/10;
    }
    
    if(digits==1){
        if(num == 0){
            printf("Zero\n");
        }else if(num == 1){
            printf("One\n");
        }else if(num == 2){
            printf("Two\n");
        }else if(num == 3){
            printf("Three\n");
        }else if(num == 4){
            printf("Four\n");
        }else if(num == 5){
            printf("Five\n");
        }else if(num == 6){
            printf("Six\n");
        }else if(num == 7){
            printf("Seven\n");
        }else if(num == 8){
            printf("Eight\n");
        }else{
            printf("Nine\n");
        }
    }else{
        printf("Greather than 9\n");
    }

}
 
     
 