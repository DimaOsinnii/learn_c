/* This program transform alphabetic phone number into numeric */

#include <stdio.h>

int main(void) {
    printf("Enter phone number: ");

    char phone_number[15] = {0};

    char ch = getchar();
    int i = 0, j;

    while (ch != '\n' && i < 15) {
        phone_number[i] = ch;
        ch = getchar();
        i++;
    }

    printf("In numeric form: ");

    for (j = 0; j < 15; j++) {
        if (!phone_number[j]) break;

        // printf("%c\n", phone_number[j]);

        switch (phone_number[j]) {
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
                putchar(phone_number[j]);
        }
    }


    return 0;
}
