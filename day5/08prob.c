//Convert a String to Uppercase
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // it will convert it to uppercase.
        } 
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
