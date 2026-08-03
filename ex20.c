/* Write a C program to count the frequency of every alphabet present in a sentence. */
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    printf("\nFrequency of each alphabet:\n");

    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", i + 'A', freq[i]);
        }
    }

    return 0;
}
