/* Write a C program to find the first occurrence of a character in a string and display its position. */
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, position = -1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter the character to find: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            position = i + 1;   // Position starts from 1
            break;
        }
    }

    if (position != -1)
        printf("First occurrence of '%c' is at position %d.\n", ch, position);
    else
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
