#include <stdio.h>

int main(void) {
    int n;
    float e = 1.0f, epsilon;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter epsilon (a small floating-point): ");
    scanf("%f", &epsilon);


    for (unsigned long int i = 1, f = 1; i <= n; ++i, f *= i) {
        const float term = 1.0f / (float) f;

        if (term < epsilon) break;

        e += term;
    }

    printf("approximate e: %f", e);
}
