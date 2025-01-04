#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUESTIONS_COUNT 15
#define OPTIONS_COUNT 4

void generate_question(FILE *file, int divisor) {
    int dividend, answer, options[OPTIONS_COUNT];

    // Generate random dividend based on divisor
    dividend = rand() % (divisor * 10) + 1; // Ensure dividend is not zero
    
    // Calculate the answer
    answer = dividend / divisor;

    // Generate options
    options[0] = answer;
    for (int i = 1; i < OPTIONS_COUNT; i++) {
        int offset = rand() % 5 + 1;
        options[i] = answer + offset; // Option is slightly above correct answer
        // Ensure unique options
        for (int j = 0; j < i; j++) {
            if (options[i] == options[j]) {
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
    fprintf(file, "{\n  \"question\": \"%d ÷ %d = ?\",\n  \"options\": [\"%d\", \"%d\", \"%d\", \"%d\"],\n  \"answer\": \"%d\"\n}",
            dividend, divisor, options[0], options[1], options[2], options[3], answer);
}

void generate_questions_file(const char *filename, int divisor) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    
    fprintf(file, "[\n");
    for (int i = 0; i < QUESTIONS_COUNT; i++) {
        generate_question(file, divisor);
        if (i < QUESTIONS_COUNT - 1) {
            fprintf(file, ",\n");
        }
    }
    fprintf(file, "\n]");
    
    fclose(file);
}

int main() {
    srand(time(NULL));

    for (int divisor = 1; divisor <= 15; divisor++) {
        char filename[50];
        sprintf(filename, "%d_table_division_questions.json", divisor);
        generate_questions_file(filename, divisor);
    }

    printf("Division questions generated and saved in JSON format.\n");

    return 0;
}
