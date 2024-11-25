#include <stdio.h>


int main(void) {
    int amount;
    printf("Enter a dollar amount: ");

    scanf("%d", &amount);

    int bills20 = amount / 20;
    amount %= 20;

    int bills10 = amount / 10;
    amount %= 10;

    int bills5 = amount / 5;
    amount %= 5;

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", amount);
}
