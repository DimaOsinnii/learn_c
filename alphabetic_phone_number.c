/* This program transform alphabetic phone number into numeric */

#include <stdio.h>

int main(void) {
    printf("Enter phone number: ");

    char ch = getchar();

    printf("starting char %c\n", ch);

    while (ch != '\n') {
        switch (ch) {
            case 'A':
            case 'B':
            case 'C':
                putchar(50);
                break;
            case 'D':
            case 'E':
            case 'F':
                putchar(51);
                break;
            case 'G':
            case 'H':
            case 'I':
                putchar(52);
                break;
            case 'J':
            case 'K':
            case 'L':
                putchar(53);
                break;
            case 'M':
            case 'N':
            case 'O':
                putchar(54);
                break;
            case 'P':
            case 'R':
            case 'S':
                putchar(55);
                break;
            case 'T':
            case 'U':
            case 'V':
                putchar(56);
                break;
            case 'W':
            case 'X':
            case 'Y':
                putchar(57);
                break;
            default:
                putchar(ch);
        }

        ch = getchar();
    }


    return 0;
}
