// Program to compress consecutive duplicate characters
#include <stdio.h>

void compress(char str[])
{
    int i, j = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0 || str[i] != str[i - 1])
            str[j++] = str[i];
    }

    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    compress(str);

    printf("Compressed String: %s\n", str);

    return 0;
}
