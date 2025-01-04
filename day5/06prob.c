// Check if a String is a Palindrome
#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[] = "madam";
    int length = 0, i;
    bool isPalindrome = true;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}
