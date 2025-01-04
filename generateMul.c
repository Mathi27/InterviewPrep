#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TABLES_COUNT 15
#define SETS_COUNT 12
#define OPTIONS_COUNT 4

void generate_question(FILE *file, int multiplier, int multiplicand) {
    int answer = multiplier * multiplicand;
    int options[OPTIONS_COUNT];

    // Generate options
    options[0] = answer;
    for (int i = 1; i < OPTIONS_COUNT; i++) {
        int offset = rand() % 10 + 1;
        options[i] = (rand() % 2 == 0) ? answer + offset : answer - offset;
        // Ensure unique options
        for (int j = 0; j < i; j++) {
            if (options[i] == options[j] || options[i] <= 0) {
                i--;
                break;
            }
        }
    }

    // Shuffle options
    for (int i = 0; i < OPTIONS_COUNT; i++) {
        int j = rand() % OPTIONS_COUNT;
        int temp = options[i];
        options[i] = options[j];
        options[j] = temp;
    }

    // Write to file in JSON format
    fprintf(file, "{\n  \"question\": \"%d x %d = ?\",\n  \"options\": [\"%d\", \"%d\", \"%d\", \"%d\"],\n  \"answer\": \"%d\"\n}",
            multiplier, multiplicand, options[0], options[1], options[2], options[3], answer);
}

void generate_multiplication_table_file(int table_number) {
    char filename[50];
    sprintf(filename, "multiplication_table_%d.json", table_number);

    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    
    fprintf(file, "[\n");
    for (int i = 1; i <= SETS_COUNT; i++) {
        generate_question(file, table_number, i);
        if (i < SETS_COUNT) {
            fprintf(file, ",\n");
        }
    }
    fprintf(file, "\n]");
    
    fclose(file);
}

int main() {
    srand(time(NULL));

    for (int i = 1; i <= TABLES_COUNT; i++) {
        generate_multiplication_table_file(i);
    }

    printf("Multiplication tables generated and saved in JSON format.\n");

    return 0;
}
