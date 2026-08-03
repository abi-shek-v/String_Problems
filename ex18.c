/* Write a C program to remove all digits from a mixed string. Example: "AB123CD45". */

#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a mixed string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing digits: %s\n", str);

    return 0;
}
