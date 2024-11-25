#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    int largest = i1 > i2 ? i1 : i2;
    int smallest = i1 < i2 ? i2 : i1;

    if (i3 > largest) {
        largest = i3;
    }

    if (i3 < smallest) {
        smallest = i3;
    }

    if (i4 > largest) {
        largest = i4;
    }

    if (i4 < smallest) {
        smallest = i4;
    }

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
}
