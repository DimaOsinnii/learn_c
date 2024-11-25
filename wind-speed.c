#include <stdio.h>


int main(void) {
    int wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &wind_speed);


    if (wind_speed < 1) {
        printf("Description: Calm");
    } else if (wind_speed >= 1 && wind_speed <=3) {
        printf("Description: Light air");
    } else if (wind_speed >= 4 && wind_speed <= 27) {
        printf("Description: Breeze");
    } else if (wind_speed >= 28 && wind_speed <= 47) {
        printf("Description: Gale");
    } else if (wind_speed >= 48 && wind_speed <= 63) {
        printf("Description: Storm");
    } else {
        printf("Description: Hurricane");
    }
}