#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUESTIONS_COUNT 50
#define OPTIONS_COUNT 4

void generate_question(FILE *file, int digits, char operation) {
    int num1, num2, answer, options[OPTIONS_COUNT];

    // Generate random numbers based on the digit count
    if (digits == 2) {
        num1 = rand() % 90 + 10;
        num2 = rand() % 90 + 10;
    } else if (digits == 3) {
        num1 = rand() % 900 + 100;
        num2 = rand() % 900 + 100;
    } else {
        num1 = rand() % 9000 + 1000;
        num2 = rand() % 9000 + 1000;
    }

    // Calculate the answer based on the operation
    if (operation == '+') {
        answer = num1 + num2;
    } else {
        // Ensure no negative results for simplicity
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        answer = num1 - num2;
    }

    // Generate options
    options[0] = answer;
    for (int i = 1; i < OPTIONS_COUNT; i++) {
        int offset = rand() % 20 + 1;
        options[i] = (rand() % 2 == 0) ? answer + offset : answer - offset;
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
    fprintf(file, "{\n  \"question\": \"%d %c %d = ?\",\n  \"options\": [\"%d\", \"%d\", \"%d\", \"%d\"],\n  \"answer\": \"%d\"\n}",
            num1, operation, num2, options[0], options[1], options[2], options[3], answer);
}

void generate_questions_file(const char *filename, int digits, char operation) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    
    fprintf(file, "[\n");
    for (int i = 0; i < QUESTIONS_COUNT; i++) {
        generate_question(file, digits, operation);
        if (i < QUESTIONS_COUNT - 1) {
            fprintf(file, ",\n");
        }
    }
    fprintf(file, "\n]");
    
    fclose(file);
}

int main() {
    srand(time(NULL));

    generate_questions_file("2digit_addition_questions.json", 2, '+');
    generate_questions_file("2digit_subtraction_questions.json", 2, '-');
    generate_questions_file("3digit_addition_questions.json", 3, '+');
    generate_questions_file("3digit_subtraction_questions.json", 3, '-');
    generate_questions_file("4digit_addition_questions.json", 4, '+');
    generate_questions_file("4digit_subtraction_questions.json", 4, '-');

    printf("Questions generated and saved in JSON format.\n");

    return 0;
}
