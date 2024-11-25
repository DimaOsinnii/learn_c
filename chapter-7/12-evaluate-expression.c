#include <stdio.h>

// The operands in the expression are floating-point numbers; the operators are +,-,* and /.
// The expression is evaluated from left to right (no operator takes precedence over any other operator)
int main(void) {
    printf("Enter an expression: ");
    char ch;
    float result = 0.0f;
    float n;

    scanf("%f", &result);
    scanf("%c", &ch);
    do {
        scanf("%f", &n);

        switch (ch) {
            case '+':
                result += n;
                scanf("%c", &ch);
                continue;
            case '-':
                result -= n;
                scanf("%c", &ch);
                continue;
            case '*':
                result *= n;
                scanf("%c", &ch);
                continue;
            case '/':
                result /= n;
                scanf("%c", &ch);
                continue;
            default:
                printf("Invalid operator: %c", ch);
                return 1;
        }
    } while (ch != '\n');

    printf("Value of expression: %f", result);

    return 0;
}
