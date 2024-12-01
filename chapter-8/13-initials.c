#include <stdio.h>

int main(void) {
    printf("Enter a first and last name: ");
    char first_name_initial, last_name_char[20] = {0};

    while ((first_name_initial = getchar()) == ' ');

    while (getchar() != ' ');

    while ((last_name_char[0] = getchar()) == ' ');

    for (int i = 1, ch = getchar(); i < 20; ++i, ch = getchar()) {
        if (ch == '\n' || ch == ' ') break;

        last_name_char[i] = (char) ch;
    }


    for (int i = 0; i < 20; ++i) {
        if (!last_name_char[i]) break;

        putchar(last_name_char[i]);
    }

    putchar(44);
    putchar(32);
    putchar(first_name_initial);
    putchar(46);

    return 0;
}
