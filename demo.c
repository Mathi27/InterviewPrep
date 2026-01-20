#include <stdio.h>
#include <time.h>

#define OUTPUT_FILE "output.txt"

int main(void) {
    int number = 20000;
    FILE *file = fopen(OUTPUT_FILE, "w");  

    if (!file) {
        printf("Error opening file!\n");
        return 1;
    }

    clock_t start = clock();

    for (int i = 1; i <= number; i++) {
        if (!(i % 15)) fprintf(file, "FizzBuzz\n");
        else if (!(i % 5)) fprintf(file, "Buzz\n");
        else if (!(i % 3)) fprintf(file, "Fizz\n");
        else fprintf(file, "%d\n", i);
    }

    fclose(file);  

    clock_t end = clock();
    double execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n",execution_time);

    return 0;
}
