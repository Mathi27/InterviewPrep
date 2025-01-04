#include <stdio.h>
#include <string.h>

int main() {
  int x = 10;
  float y = 1.3f;
  char z = 'p';
  char charArray[10] = "Mathi";
  
  // Pointer declaration and initialization
  int *ptr_x = &x;
  float *ptr_y = &y;
  char *ptr_z = &z;
  char *ptr_array = charArray;
  printf("Value of z before = %c\n", *ptr_z);
  printf("Value of char array before = %s\n", charArray);
  *ptr_z = 'a'; 
  // Use strcpy function from the String.h to copy the string into charArray
  strcpy(ptr_array, "Yuv");
  // Printing the values
  printf("Value of x = %d\n", *ptr_x);
  printf("Value of y = %f\n", *ptr_y);
  printf("Value of z after= %c\n", *ptr_z);
  printf("Value of char array After = %s\n", ptr_array);
  
  return 0;
}
