#include <stdio.h>

#define SIZE 40

int main() {
    int fib_numbers[SIZE] = {1, 1};

    printf("index 0 = %d\nindex 1 = %d\n", fib_numbers[0], fib_numbers[1]);
    for (int i = 2; i <= SIZE - 1; ++i) {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
        printf("index %d = %d\n", i, fib_numbers[i]);
    }


    return 0;
}
