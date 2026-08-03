/* Write a C program to extract only the uppercase letters from an alphanumeric string. */
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter an alphanumeric string: ");
    scanf("%s", str);

    printf("Uppercase letters: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}
