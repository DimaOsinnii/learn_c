#include <stdbool.h>
#include <stdio.h>


int main(void) {
    int hour, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &minutes);

    if (hour == 0) {
        printf("Equivalent 12-hour time: 12:%02dAM\n", minutes);
    } else if (hour == 12) {
        printf("Equivalent 12-hour time: 12:%02dPM\n", minutes);
    } else if (hour < 12) {
        printf("Equivalent 12-hour time: %02d:%02d AM\n", hour, minutes);
    } else {
        printf("Equivalent 12-hour time: %02d:%02d PM\n", hour - 12, minutes);
    }
}
