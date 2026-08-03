/* Write a C program to remove duplicate characters from a username while preserving the first occurrence. */
#include <stdio.h>

int main() {
    char username[100];
    int i, j, k;

    printf("Enter the username: ");
    scanf("%s", username);

    for (i = 0; username[i] != '\0'; i++) {
        for (j = i + 1; username[j] != '\0'; ) {
            if (username[i] == username[j]) {
                for (k = j; username[k] != '\0'; k++) {
                    username[k] = username[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    printf("Username after removing duplicates: %s\n", username);

    return 0;
}
