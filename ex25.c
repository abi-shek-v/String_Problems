/* Write a C program to validate whether a password contains at least one uppercase letter,
 one lowercase letter, one digit, and one special character. */
#include <stdio.h>

int main() {
    char password[100];
    int i;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter the password: ");
    scanf("%s", password);

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            hasLower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Valid password.\n");
    else
        printf("Invalid password.\n");

    return 0;
}
