#include <stdio.h>


int main(void) {
    int itemNumber, day, month, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\tUnit\tPurchase\n\t\tPrice\tDate\n%d\t\t$%6.2f\t%d/%d/%d", itemNumber, unitPrice, day, month, year);
}