#include <stdio.h>
#include <math.h>
#define RADIUS 10

int main(void) {
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("Volume of a sphere with radius %d equals %.1f\n", radius, 4.0f / 3.0f * M_PI * radius * radius * radius);
}
