#include <ctype.h>
#include <stdio.h>

#define SIZE 100

int main(void) {
    char message[SIZE], ch;
    int i = 0;

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n')
        message[i++] = ch;


    for (int j = 0; j < i; j++) {
        switch (ch = toupper(message[j])) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(ch);
        }
    }

    printf("!!!!!\n");

    return 0;
}
