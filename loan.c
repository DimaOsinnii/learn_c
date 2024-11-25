#include <stdio.h>

int main(void) {
    float loan, rate, monthly_payment;
    int payments;

    printf("Enter amount of load: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &payments);


    for (int i = 1; i <= payments; ++i) {
        if (loan <= 0) break;

        loan = (loan - monthly_payment) + loan * ((rate / 100) / 12);
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);
    }
}
