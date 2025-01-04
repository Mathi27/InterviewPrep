#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a timestamp of the format HH:MM:SS.mmm
int isTimestamp(const char *str) {
    if (strlen(str) < 12) return 0;
    for (int i = 0; i < 12; i++) {
        if ((i == 2 || i == 5) && str[i] != ':') return 0;
        if (i == 8 && str[i] != '.') return 0;
        if ((i != 2 && i != 5 && i != 8) && !isdigit(str[i])) return 0;
    }
    return 1;
}

void removeTimestamp(char *line) {
    char *p = line;
    if (isTimestamp(p)) {
        // Skip the timestamp and any leading spaces
        p += 12; // length of "HH:MM:SS.mmm"
        while (*p && isspace(*p)) {
            p++;
        }
        // Copy the rest of the line back to the start
        memmove(line, p, strlen(p) + 1);
    }
}

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char line[2000];
    while (fgets(line, sizeof(line), inputFile)) {
        removeTimestamp(line);
        fputs(line, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Timestamps removed and output saved to output.txt\n");

    return EXIT_SUCCESS;
}
