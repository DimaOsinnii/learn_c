#include <stdio.h>

int main(void) {
    // long n;
    //
    //
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    //
    // for (long i = 1; i <= n; i++) {
    //     printf("%10ld\t%10ld\n", i, i * i);
    // }


    printf("This program prints a table of squares.\n");

    for (long i = 1;; ++i) {
        printf("%10ld\t%10ld\n", i, i * i);

        if (i % 24 == 0) {
            printf("Please Press Enter to continue...");
            getchar();
        }
    }

    return 0;
}
