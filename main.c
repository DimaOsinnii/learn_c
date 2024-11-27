#include <stdbool.h>
#include <stdio.h>


#define SIZE  7

int main(void) {
    // printf("Hello, World!\n");
    //
    // int n, d;
    // scanf("%d", &n);
    //
    // for (d = 2; d * d <= n; d++) {
    //     printf("n %d d %d %d\n", n, d, n % d);
    //
    //     if (n % d == 0) break;
    // }
    //
    // printf("r %d\n", d);
    //
    // if (d * d <= n) {
    //     printf("%d is divisible by %d\n", n, d);
    // } else {
    //     printf("%d is prime\n", n);
    // }
    //


    // int n, m = 20;
    //
    // for ( n = 0; m > 0; n++, m /= 2);
    //
    // printf("m: %d", m);

    // char c  = '\1';
    //
    // printf("%c\n", c);
    //
    // int sum = 0;
    //
    // for (int i = 0; i < 10; i++) {
    //     if (i % 2) continue;
    //
    //     sum += i;
    //
    //
    // printf("%d\n", 1 % 2);
    //
    // printf("Sum: %d", sum);


    // printf("Size of Int: %ld\n", sizeof(int));
    // printf("Size of Short: %ld\n", sizeof(short));
    // printf("Size of Long: %ld\n", sizeof(long));
    // printf("Size of Float: %ld\n", sizeof(float));
    // printf("Size of Double: %ld\n", sizeof(double));
    // printf("Size of Long Double: %ld\n", sizeof(long double));
    //


    const bool weekend[SIZE] = {[0] = true, [SIZE - 1] = true};

    printf("%d", weekend[6]);

    return 0;
}
