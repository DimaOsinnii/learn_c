#include <stdio.h>


int main(void) {
    float n, largest = 1.0f;


    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n <= 0) {
            printf("The largest number entered was: %.2f", largest);
            break;
        }

        if (n >= largest) {
            largest = n;
        }
    }
}