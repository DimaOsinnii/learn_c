#include <stdio.h>


int main(void) {
    int x;
    printf("Enter the x: ");

    scanf("%d", &x);

    const int xCubic = x * x * x;

    printf("Result of 3x^3 + 2x^4 - 5x^3 - x^2 + 7x - 6 equals %d\n",
           3 * xCubic * x * x + 2 * xCubic * x - 5 * xCubic - x * x + 7 * x - 6);

    printf("Result of ((((3x + 2)x - 5)x - 1)x + 7)x - 6 equals %d", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) *  x - 6);
}
