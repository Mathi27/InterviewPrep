// copy a string
#include <stdio.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];

    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("Copied string: %s\n", dest);
    return 0;
}
