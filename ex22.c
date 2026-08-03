/* Write a C program to replace every vowel in a sentence with the '*' character. */
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            str[i] = '*';
        }
    }

    printf("Modified sentence: %s\n", str);

    return 0;
}
