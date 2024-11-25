#include <stdio.h>

int main(void) {
    printf("Enter a first and last name: ");
    char first_name_initial, last_name_char;

    while ((first_name_initial = getchar()) == ' ');

    while (getchar() != ' ');

    while ((last_name_char = getchar()) == ' ');
    putchar(last_name_char);

    while ((last_name_char = getchar()) != '\n') {
        if (last_name_char != 32) {
            putchar(last_name_char);
        }
    }

    putchar(44);
    putchar(32);
    putchar(first_name_initial);
    putchar(46);

    return 0;
}
