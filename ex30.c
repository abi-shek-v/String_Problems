// Program to check substring without using strstr()
#include <stdio.h>

int substringExists(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(str[i + j] != sub[j])
                break;
        }

        if(sub[j] == '\0')
            return 1;
    }

    return 0;
}

int main()
{
    char str[100], sub[100];

    printf("Enter main string: ");
    scanf("%[^\n]", str);

    getchar();

    printf("Enter substring: ");
    scanf("%[^\n]", sub);

    if(substringExists(str, sub))
        printf("Substring Found\n");
    else
        printf("Substring Not Found\n");

    return 0;
}
