#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9) {
        printf("The number %d has %d digit", num, 1);
    } else if (num >= 10 && num <= 99) {
        printf("The number %d has %d digits", num, 2);
    } else if (num >= 100 && num <= 999) {
        printf("The number %d has %d digits", num, 3);
    } else if (num >= 1000 && num <= 9999) {
        printf("The number %d has %d digits", num, 4);
    }
}