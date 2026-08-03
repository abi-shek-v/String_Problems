/* Write a C program to find the last occurrence of a character in a file name. */
#include <stdio.h>

int main() {
    char filename[100], ch;
    int i, position = -1;

    printf("Enter the file name: ");
    scanf("%s", filename);

    printf("Enter the character to find: ");
    scanf(" %c", &ch);

    for (i = 0; filename[i] != '\0'; i++) {
        if (filename[i] == ch) {
            position = i + 1;   // Store the latest position (1-based)
        }
    }

    if (position != -1)
        printf("Last occurrence of '%c' is at position %d.\n", ch, position);
    else
        printf("Character '%c' not found in the file name.\n", ch);

    return 0;
}
