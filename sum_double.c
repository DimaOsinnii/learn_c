#include <stdio.h>

/* Sums a series of numbers (using double variables */

int main(void) {
    double n, sum = 0;


    printf("This program sums a series of floats.\n");
    printf("Enter floats (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %.20lf\n", sum);

    return  0;
}