#include <stdio.h>


int main(void) {
    printf("Enter a sentence: ");
    char ch;
    float total_words = 0.0f;
    float words_len = 0.0f;

    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            words_len++;
        } else {
            total_words++;
        };
    };

    total_words++;

    printf("Words len: %f\n Total words: %f\n", words_len, total_words);

    printf("%.1f", words_len / total_words);

    return 0;
}
