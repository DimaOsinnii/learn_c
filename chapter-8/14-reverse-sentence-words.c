#include <stdio.h>

#define SIZE 100

int main(void) {
    char ch, sentence[SIZE] = {0}, terminating_char = 0;
    int i;

    printf("Enter a sentence: ");

    for (i = 0; (ch = getchar()) != '\n' && i < SIZE; ++i) {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminating_char = ch;
            break;
        }

        sentence[i] = ch;
    }

    printf("Reversal of sentence: ");

    for (int j = i - 1; j >= 0; --j) {
        if (j > 0 && sentence[j - 1] != ' ') continue;

        for (int m = j; m != i && sentence[m] != ' '; ++m) {
            putchar(sentence[m]);
        }

        if (j > 0) {
            putchar(' ');
        }
    }

    if (terminating_char) {
        putchar(terminating_char);
    }


    return 0;
}
