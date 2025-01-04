 #include<stdio.h>
  int main(){
   int num ;
   char ch;
   

   printf("Enter a number : ");
   scanf("%d",&num);

   printf("Enter a character :");
   fflush(stdin);
   scanf("%c",&ch);


   printf("number is  : %d ",num);
   printf("character is  : %c \n ",ch);
  }


/*
                 Temp storage
      KEYBOARD -> (BUFFER)----> printf();
        10\n

        
     stdout or stdin

 */



/*

Question  1: 

 Create a structure called "Student" with members name, age, and total
 marks.
 
 Write a C program to input data for two students, display their 
 information, and find the average of total marks.

*/




  










/**
 * 
 * // syntax :
// blueprint : just replicate the instance ()

  struct EceDept
  {
     char name[20];
     int age ;
     char section ;
     int usnNumber;
  };
  
 int main(){
     // how to create a instance 
     struct EceDept student1;
     student1.age = 22;
     student1.usnNumber = 45432;
     strcpy(student1.name,"mathi yuvarajan");    
 }
 */