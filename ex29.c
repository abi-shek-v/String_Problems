// Program to remove all occurrences of a character
#include <stdio.h>

void removeCharacter(char str[], char ch)
{
    int i, j = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ch)
        {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter character to remove: ");
    scanf("%c", &ch);

    removeCharacter(str, ch);

    printf("Result: %s\n", str);

    return 0;
}
