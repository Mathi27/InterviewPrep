#include <stdio.h>

int main() {
    int n;
    // Asking the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Declaring an array of size n
    int array[n];
    // Taking input from the user to fill the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
   // Displaying the elements of the array
    printf("The elements of the array are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

void function() {
    register int counter = 0;
    for (counter = 0; counter < 100; counter++) {
        // do something
    }
}

// File1.c
int global_var = 0; // definition of the global variable

// File2.c
extern int global_var; // declaration of the global variable
void function() {
    global_var++;
}
