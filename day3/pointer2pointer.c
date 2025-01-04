// Pointer to Pointer
#include <stdio.h>

int main() {
    int var = 10;

    // Pointer to an integer
    int *ptr1 = &var;

    // Pointer to a pointer to an integer
    int **ptr2 = &ptr1;

    // Printing the values
    printf("Value of var: %d\n", var);        // Output: 10
    printf("Value of *ptr1: %d\n", *ptr1);    // Output: 10
    printf("Value of **ptr2: %d\n", **ptr2);  // Output: 10

    // Printing the addresses
    printf("Address of var: %p\n", (void *)&var);
    printf("Address stored in ptr1 (address of var): %p\n", (void *)ptr1);
    printf("Address stored in ptr2 (address of ptr1): %p\n", (void *)ptr2);

    // Printing addresses of pointers
    printf("Address of ptr1: %p\n", (void *)&ptr1);
    printf("Address of ptr2: %p\n", (void *)&ptr2);

    return 0;
}