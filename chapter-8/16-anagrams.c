#include <ctype.h>
#include <stdio.h>

#define SIZE 26

int main(void) {
    char ch, charactes[SIZE] = {0};

    printf("Enter first word: ");

    ch = getchar();
    while (ch != '\n' && isalpha(ch)) {
        charactes[tolower(ch) - 'a']++;
        ch = getchar();
    }

    printf("Enter second word: ");

    ch = getchar();
    while (ch != '\n' && isalpha(ch)) {
        charactes[tolower(ch) - 'a']--;
        ch = getchar();
    }

    for (int i = 0; i < SIZE; ++i) {
        if (charactes[i]) {
            printf("The words are not anagrams.");

            return 0;
        }
    }

    printf("The words are anagrams.");

    return 0;
}
