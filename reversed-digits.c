#include <stdio.h>


int main(void) {
    // Arithmetic variant
    // int num;
    //
    // printf("Enter three-digit number: ");
    // scanf("%d", &num);
    //
    // int hundreds = num / 100;
    // int tens = (num / 10) % 10;
    // int ones = num % 10;
    //
    // printf("The reversal is: %d", (ones * 100) + (tens * 10) + hundreds );
    // int i1, i2, i3;
    //
    // printf("Enter three-digit number: ");
    // scanf("%1d%1d%1d", &i1, &i2, &i3);
    //
    // printf("The reversal is: %d%d%d", i3, i2, i1);


    //With loop


    int num, reverse_num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 679
    do {
        reverse_num = reverse_num ? reverse_num * 10 + (num % 10) : num % 10;
        num /= 10;
    } while (num > 0);


    printf("Reversed number: %d", reverse_num);
}
