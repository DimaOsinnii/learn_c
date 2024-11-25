
#include <stdio.h>

int main(void) {
    int countryCode, firstPart, secondPart;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &countryCode, &firstPart, &secondPart);

    printf("You entered %d.%d.%d", countryCode, firstPart, secondPart);
}