
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            printf("Strings are equal\n");
            return 0;
        }
        i++;
    }

    printf("Strings are not equal\n");
    return 0;
}
