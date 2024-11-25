#include <stdio.h>


int main(void) {
    int num,  i1, i2, i3, i4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    i1 = num / 8;
    i2 = i1 / 8;
    i3 = i2 / 8;
    i4 = i3 / 8;

    printf("Decimal: %d\n", num);
    printf("Octal: %d%d%d%d%d\n", i4 % 8, i3 % 8, i2 % 8, i1 % 8, num % 8);
}
