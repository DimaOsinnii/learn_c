#include <stdio.h>

int main(void) {
    float amount;
    int taxPercent;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("Enter percent of tax: ");
    scanf("%d", &taxPercent);

    printf("With tax added: %.2f", (taxPercent * amount / 100) + amount);

    return 0;
}