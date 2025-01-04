/*
Size of a Pointer Variable

The memory (or, size) occupied by a pointer variable does not depend on the type of the
variable it is pointing to. 

The size of a pointer depends on the " system architecture. " 
*/

#include <stdio.h>

int main() {
  int x = 10;
  float y = 1.3f;
  char z = 'p';

  // Pointer declaration and initialization
  int * ptr_x = & x;
  float * ptr_y = & y;
  char * ptr_z = & z;

  // Printing the size of pointer variables
  printf("Size of integer pointer : %lu\n", sizeof(ptr_x));
  printf("Size of float pointer : %lu\n", sizeof(ptr_y));
  printf("Size of char pointer : %lu\n", sizeof(ptr_z));
  
  return 0;
}