// Program to toggle the case of every alphabet in a string
#include <stdio.h>

// User-defined function
void toggleCase(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;      // Convert to uppercase
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;      // Convert to lowercase
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    toggleCase(str);

    printf("Toggled String: %s\n", str);

    return 0;
}
