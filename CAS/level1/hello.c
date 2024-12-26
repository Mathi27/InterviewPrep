#include<stdio.h>  // Header file
 
int main()
{
  /*
    int  bucket1 = 20 ; // it store integer value.
    float bucket2 = 30.5; // it store decimal value.
    char  bucket3 = 'A'; // it store character .
    char  bucket4[20] = "Mathi Yuvarajan"; // it stores array of characters.
   
    printf("%d\n",bucket1);  // print the int variable 
    printf("%f\n",bucket2);  // print the float variable
    printf("%c\n",bucket3);  
    printf("%s\n",bucket4);
    */
//    int bucket1;
//    printf("Enter a value: ");
//    scanf("%d",&bucket1);

//    printf("%d\n",bucket1);

  /**
   * 
   *  0x100
   *  
   *  0x102
   * 
   *  0x104
   * 
   */

   // if else.

   int age;
   printf("Enter age: ");
   scanf("%d",&age);

   if(age > 10 && age <18){
      printf("come back after 8 years !! ");
   }
   else if(age >18){
 printf("You are  eligible for voting");
   }
   else{
      printf("You are not eligible for voting");
   }
 
   
}