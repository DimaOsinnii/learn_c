#include <stdio.h>

#define N 10
#define LENGTH ((int)(sizeof(a) / sizeof(a[0])))

int main(void) {
    int a[N], i;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < LENGTH; i++)
        scanf("%d", &a[i]);

    for (i = LENGTH - 1; i >= 0; --i)
        printf(" %d", a[i]);

    printf("\n");

    return 0;
}
