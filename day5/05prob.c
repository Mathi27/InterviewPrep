// Reverse a String
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int length = 0, i;
    char temp;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
