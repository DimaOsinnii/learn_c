/* Checks numbers for repeated digits */
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool is_any_digit_repeated = false;
    int repeated_digits[10] = {};

    long n, digit;


    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        if (repeated_digits[digit]) {
            is_any_digit_repeated = true;
        }

        repeated_digits[digit]++;
        n /= 10;
    }

    printf("Digit:      \t");

    for (int i = 0; i < 10; ++i) {
        printf("%d\t", i);
    }
    printf("\n");

    printf("Occurrences:\t");

    for (int i = 0; i < 10; ++i) {
        printf("%d\t", repeated_digits[i]);
    }

    printf("\n");

    if (is_any_digit_repeated) {
        printf("Repeated digit (s):");

        for (int i = 0; i < 10; ++i) {
            if (repeated_digits[i] > 1) {
                printf(" %d", i);
            }
        }
    } else
        printf("No repeated digits\n");


    return 0;
}
