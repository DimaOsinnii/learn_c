#include <stdio.h>

#define SIZE 80

int main(void) {
    char ch, message[SIZE] = {0};
    int i, shift;

    printf("Enter message to be encrypted: ");

    for (i = 0; ((ch = getchar()) != '\n') && i < SIZE; ++i) {
        message[i] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);


    printf("Encrypting message: ");

    for (int j = 0; j < i; j++) {
        if (message[j] >= 'A' && message[j] <= 'Z') {
            putchar(((message[j] - 'A') + shift) % 26 + 'A');
        } else if (message[j] >= 'a' && message[j] <= 'z') {
            putchar(((message[j] - 'a') + shift) % 26 + 'a');
        } else {
            putchar(message[j]);
        }
    }

    return 0;
}
