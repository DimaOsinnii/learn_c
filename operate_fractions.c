#include <stdio.h>


int main(void) {
    int num1, num2, denom1, denom2, result_num, result_denom;
    char sign;

    printf("Enter two fractions separated by (+,-,*,/): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);


    switch (sign) {
        case 43:
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case 45:
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case 42:
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case 47:
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
            printf("Invalid operator \"%c\"", sign);
            return 1;
    }


    printf("Result: %d/%d", result_num, result_denom);

    return 0;
}
