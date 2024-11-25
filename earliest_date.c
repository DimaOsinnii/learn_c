#include <stdio.h>


int main(void) {
    int m, d, y, em = 0, ed = 0, ey = 0;

    for (;;) {
        printf("Enter a date: ");
        scanf("%d/%d/%d", &m, &d, &y);

        if (m == 0 && d == 0 && y == 0) break;


        if (ey == 0 || y < ey || (ey == y && m < em) || (ey == y && em == m && d < ed)) {
            em = m;
            ed = d;
            ey = y;
        };
    }

    printf("%d/%d/%02d is the earliest date", em, ed, ey);
}
