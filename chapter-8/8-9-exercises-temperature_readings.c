#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//        {25, 26, 25, 24, 25, 23, 27, 30, 21, 22, 25, 26, 27, 28, 25, 30, 26, 27, 26, 26, 26, 25, 29, 30}

#define DAYS 30
#define HOURS 24
#define NUM_TEMP 11

int main(void) {
    const int temperature_values[] = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

    int temperature_readings[30][24], average_temp = 0;

    srand((unsigned) time(NULL));

    for (int i = 0; i < DAYS; ++i) {
        for (int j = 0; j < HOURS; ++j) {
            const int temperature_index = rand() % NUM_TEMP;

            temperature_readings[i][j] = temperature_values[temperature_index];
            printf("%d\n", temperature_readings[i][j]);
            average_temp += temperature_readings[i][j];
        }
    }

    printf("Total temp: %d\n", average_temp);
    average_temp = average_temp / (DAYS * HOURS);

    printf("Average temperature: %d", average_temp);

    return 0;
}
