#include <math.h>
#include <stdio.h>

//Greatest common divisor

int main(void) {
    int i1, i2;

    printf("Enter two integers: ");
    scanf("%d %d", &i1, &i2);


    while (i1 > 0) {
        const int remainder = i2 % i1;
        i2 = i1;
        i1 = remainder;
    }

    printf("Greatest common divisor: %d", i2);
}
