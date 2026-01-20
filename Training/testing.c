#include <stdio.h>
#include <assert.h>

int main() {
    int x = 5;
    assert(x == 5); // This assertion passes.
    assert(x == 10); // This assertion fails, and the program terminates.
    printf("This line will not be printed if the assertion fails.\n");
    return 0;
}