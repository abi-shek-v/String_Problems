// Program to remove all vowels from a string
#include <stdio.h>

void removeVowels(char str[])
{
    int i, j = 0;
    char temp[100];

    for(i = 0; str[i] != '\0'; i++)
    {
        if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
             str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
        {
            temp[j++] = str[i];
        }
    }

    temp[j] = '\0';

    for(i = 0; temp[i] != '\0'; i++)
        str[i] = temp[i];

    str[i] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    removeVowels(str);

    printf("After removing vowels: %s\n", str);

    return 0;
}
