#include <stdio.h>

// Calculate the factorial of positive integer
int main(void) {
    unsigned int ui;
    long double f = 1.0L;
    int i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &ui);


    // short type - 7!
    // int type - 12!
    // long type - 20!
    // float type - 34!
    // double type -
    for (i = 1; i <= ui; ++i) {
        f *= i;
    }

    printf("Factorial of %d: %Lf", ui, f);

    return 0;
}
