#include <stdio.h>

int main(void) {
    int numerator, denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int n = numerator;
    int gcd = denominator;

    while (n > 0) {
        const int remainder = gcd % n;

        gcd = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d", numerator / gcd, denominator / gcd);
}
