#include <stdio.h>

int main(void) {
    float amount;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &amount);

    if (amount < 750) {
        printf("Tax due: %.2f$", amount * .1f);
    } else if (amount >= 750 && amount < 2250) {
        printf("Tax due: %.2f$", 7.50f + (amount > 750 ? (amount - 750) * .2f : 0));
    } else if (amount >= 2250 && amount < 3750) {
        printf("Tax due: %.2f$", 37.50f + (amount > 2250 ? (amount - 2250) * .3f : 0));
    } else {
        printf("Tax due: %.2f$", 230.00f + (amount > 7000 ? (amount - 7000) * .6f : 0));
    }
}
