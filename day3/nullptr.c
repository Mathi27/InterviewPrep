/**
 * NULL Pointers

It is always a good practice to assign a NULL value to a pointer variable in case you do 
not have an exact address to be assigned. 

This is done at the time of variable declaration. 

A pointer that is assigned NULL is called a null pointer.

The NULL pointer is a constant with a value of "0" defined in several standard libraries.
 */
#include <stdio.h>

int main(){

   int *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr);
 
   return 0;
}