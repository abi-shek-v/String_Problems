// Program to implement a Mini String Library using User-Defined Functions

#include <stdio.h>

// Function Prototypes
int length(char str[]);
void copy(char source[], char dest[]);
int compare(char str1[], char str2[]);
void concatenate(char str1[], char str2[]);
void reverse(char str[]);
void uppercase(char str[]);
void lowercase(char str[]);
int palindrome(char str[]);
int search(char str[], char ch);

int main()
{
    char str1[100], str2[100], temp[100];
    char ch;

    // Input
    printf("Enter First String: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter Second String: ");
    scanf("%[^\n]", str2);

    getchar();

    printf("Enter Character to Search: ");
    scanf("%c", &ch);

    // Length
    printf("\nLength of First String = %d\n", length(str1));

    // Copy
    copy(str1, temp);
    printf("Copied String = %s\n", temp);

    // Compare
    if(compare(str1, str2))
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    // Concatenate
    copy(str1, temp);
    concatenate(temp, str2);
    printf("Concatenated String = %s\n", temp);

    // Reverse
    copy(str1, temp);
    reverse(temp);
    printf("Reversed String = %s\n", temp);

    // Uppercase
    copy(str1, temp);
    uppercase(temp);
    printf("Uppercase = %s\n", temp);

    // Lowercase
    copy(str1, temp);
    lowercase(temp);
    printf("Lowercase = %s\n", temp);

    // Palindrome
    if(palindrome(str1))
        printf("Palindrome = Yes\n");
    else
        printf("Palindrome = No\n");

    // Character Search
    int pos = search(str1, ch);
    if(pos != -1)
        printf("Character '%c' Found at Position %d\n", ch, pos + 1);
    else
        printf("Character '%c' Not Found\n", ch);

    return 0;
}

// Function to find string length
int length(char str[])
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

// Function to copy string
void copy(char source[], char dest[])
{
    int i = 0;
    while(source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to compare strings
int compare(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return 0;
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

// Function to concatenate strings
void concatenate(char str1[], char str2[])
{
    int i = length(str1);
    int j = 0;

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

// Function to reverse string
void reverse(char str[])
{
    int i = 0;
    int j = length(str) - 1;
    char temp;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

// Function to convert to uppercase
void uppercase(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

// Function to convert to lowercase
void lowercase(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

// Function to check palindrome
int palindrome(char str[])
{
    int i = 0;
    int j = length(str) - 1;

    while(i < j)
    {
        if(str[i] != str[j])
            return 0;

        i++;
        j--;
    }

    return 1;
}

// Function to search character
int search(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            return i;
    }

    return -1;
}
