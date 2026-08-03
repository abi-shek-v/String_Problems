// Program to count digits, alphabets and special characters
#include <stdio.h>

int countAlphabets(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
            count++;
    }

    return count;
}

int countDigits(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            count++;
    }

    return count;
}

int countSpecial(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == ' '))
            count++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Alphabets = %d\n", countAlphabets(str));
    printf("Digits = %d\n", countDigits(str));
    printf("Special Characters = %d\n", countSpecial(str));

    return 0;
}
