#include <ctype.h>
#include <stdio.h>


#define DEPARTURE_LENGHT ((int) sizeof(departures) / sizeof(departures[0]))

int main(void) {
    const int departures[] = {
        8 * 60,
        9 * 60,
        11 * 60 + 19,
        12 * 60 + 47,
        14 * 60,
        15 * 60 + 45,
        19 * 60,
        21 * 60 + 45
    };

    const int arrivals[] = {
        10 * 60 + 16,
        11 * 60 + 52,
        13 * 60 + 31,
        15 * 60,
        16 * 60 + 8,
        17 * 60 + 55,
        21 * 60 + 20,
        23 * 60 + 58
    };

    int h, m, d_h, d_m, a_h, a_m, time_minutes;
    char meridiem;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d%c", &h, &m, &meridiem);

    if (toupper(meridiem) == 'P') {
        time_minutes = (h < 12 ? h + 12 : 0) * 60;
    } else {
        time_minutes = h * 60;
    }

    time_minutes += m;

    for (int i = 0; i < DEPARTURE_LENGHT; i++) {
        if (i == DEPARTURE_LENGHT - 1 ||
            time_minutes <= departures[i] ||
            departures[i + 1] - time_minutes >= time_minutes - departures[i]) {
            d_h = departures[i] / 60;
            d_m = departures[i] - d_h * 60;
            d_h = d_h > 12 ? d_h - 12 : d_h;
            a_h = arrivals[i] / 60;
            a_m = arrivals[i] - a_h * 60;
            a_h = a_h > 12 ? a_h - 12 : a_h;

            printf("Closest departure time is %02d:%02d %c.m, arriving at %02d:%02d %c.m",
                   d_h, d_m, departures[i] / 60 > 12 ? 'p' : 'a',
                   a_h, a_m, arrivals[i] / 60 > 12 ? 'p' : 'a');

            return 0;
        }
    }

    return 0;
}
