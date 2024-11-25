#include <ctype.h>
#include <stdio.h>

//TODO
int main(void) {
    // First implementation without handling 12-hours clock
    // int hours, minutes;
    // //Departure time
    // int d1 = 8 * 60, d2 = 9 * 60 + 43, d3 = 11 * 60 + 19, d4 = 12 * 60 + 47, d5 = 14 * 60, d6 = 15 * 60 + 45,
    //         d7 = 19 * 60, d8 = 21 * 60 + 45;
    //
    // printf("Enter a 24-hour time: ");
    // scanf("%d:%d", &hours, &minutes);
    //
    // const int time_minutes = hours * 60 + minutes;
    //
    // if (time_minutes <= d1 || d2 - time_minutes >= time_minutes - d1) {
    //     printf("%d", d1 / 60);
    // }

    //Implementation with 12-hours clock

    int d1 = 8 * 60, d2 = 9 * 60 + 43, d3 = 11 * 60 + 19, d4 = 12 * 60 + 47, d5 = 14 * 60, d6 = 15 * 60 + 45,
            d7 = 19 * 60, d8 = 21 * 60 + 45;

    int hours, minutes, time_minutes;
    char meridiem;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d%c", &hours, &minutes, &meridiem);

    if (toupper(meridiem) == 'P') {
        time_minutes = (hours < 12 ? hours + 12 : 0) * 60;
    } else {
        time_minutes = hours * 60;
    }

    time_minutes += minutes;

    if (time_minutes <= d1 || d2 - time_minutes >= time_minutes - d1) {
        printf("%d", d1 / 60);
    } else if (time_minutes <= d2 || d3 - time_minutes >= time_minutes - d2) {
        printf("%d", d2 / 60);
    } else if (time_minutes <= d3 || d4 - time_minutes >= time_minutes - d3) {
        printf("%d", d3 / 60);
    } else if (time_minutes <= d4 || d5 - time_minutes >= time_minutes - d4) {
        printf("%d", d4 / 60);
    } else if (time_minutes <= d5 || d6 - time_minutes >= time_minutes - d5) {
        printf("%d", d5 / 60);
    } else if (time_minutes <= d6 || d7 - time_minutes >= time_minutes - d6) {
        printf("%d", d6 / 60);
    } else if (time_minutes <= d7 || d8 - time_minutes >= time_minutes - d7) {
        printf("%d", d7 / 60);
    } else {
        printf("%d", d8 / 60);
    }

    return 0;
}
