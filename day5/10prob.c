// Count the Number of Vowels in a String
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0, count = 0;
    char ch;

    while (str[i] != '\0') {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
        i++;
    }

    printf("Number of vowels: %d\n", count);
    return 0;
}
