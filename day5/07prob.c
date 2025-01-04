//  Find a Character in a String
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'W';
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' found at index %d\n", ch, i);
            return 0;
        }
    }

    printf("Character '%c' not found\n", ch);
    return 0;
}
