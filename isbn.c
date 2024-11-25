
//ISBN - International Standard Book Number;

#include<stdio.h>

int main(void) {
    int gsi, country, publisher, itemNumber, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &country, &publisher, &itemNumber, &check);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", country);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", check);
}