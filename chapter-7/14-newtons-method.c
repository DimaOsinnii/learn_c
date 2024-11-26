#include <stdio.h>
#include <math.h>


//Newton's method of getting sqrt
int main(void) {
    unsigned int x;
    double y = 1.0, avg;

    printf("Enter a positive number: ");
    scanf("%ud", &x);

    for (;;) {
        avg = ((x / y) + y) / 2;

        if (fabs(y - avg) < y * .00001) break;

        y = avg;
    }

    printf("approximate sqrt of %d is %f", x, avg);

    return 0;
}
