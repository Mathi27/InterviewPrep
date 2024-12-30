#include<stdio.h>
 

int main(){
     // odd or even. 
     /**
      * 
      * 2 - even
      * 3 - odd.
      * 
      */
      int value;
       printf("Enter a value to find odd or even:");
       scanf("%d",&value);

       if(value %2 == 0){
         printf("Even");
       }else{
        printf("ODD");
       }


}