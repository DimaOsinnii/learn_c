#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter a sentence: ");

    short vowels = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
                vowels++;
                break;
            default: break;
        }
    }
    printf("Your sentence contains %hd vowels", vowels);

    return 0;
}
