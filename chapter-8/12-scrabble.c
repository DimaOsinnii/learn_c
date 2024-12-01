#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter a word: ");

    const int scrabble_values[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    char ch;
    int value = 0;

    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);

        if (ch < 65 || ch > 90) return 1;

        value += scrabble_values[ch - 'A'];
    }

    printf("Scrabble value: %d", value);

    return 0;
}
