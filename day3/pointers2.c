// Access and Manipulate Values using Pointer
#include <stdio.h>
int main() {
  int x = 10;
  // Pointer declaration and initialization
  int * ptr = & x;
  // Printing the current value
  printf("Value of x = %d\n", * ptr);  // output : 10 
  // Changing the value
  * ptr = 20;
  // Printing the updated value
  printf("Value of x = %d\n", * ptr); // output : 20

  return 0;
}