#include <stdio.h>

int main(void) {
    int first, second, third, fourth,
            fifth, sixth, seventh, eighth,
            ninth, tenth, eleventh, twelfth,
            thirteenth, fourteenth, fifteenth, sixteenth;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &first, &second, &third, &fourth, &fifth, &sixth, &seventh,
          &eighth, &ninth, &tenth, &eleventh, &twelfth, &thirteenth,
          &fourteenth, &fifteenth, &sixteenth);

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
           first,
           second,
           third,
           fourth,
           fifth,
           sixth,
           seventh,
           eighth,
           ninth,
           tenth,
           eleventh,
           twelfth,
           thirteenth,
           fourteenth,
           fifteenth,
           sixteenth
    );

    printf("Row sums: %d %d %d %d\n",
           first + second + third + fourth,
           fifth + sixth + seventh + eighth,
           ninth + tenth + eleventh + twelfth,
           thirteenth + fourteenth + fifteenth + sixteenth
    );

    printf("Column sums: %d %d %d %d\n",
           first + fifth + ninth + thirteenth,
           second + sixth + tenth + fourteenth,
           third + seventh + eleventh + fifteenth,
           fourth + eighth + twelfth + sixteenth
    );

       printf("%d %d", 5 / 3, 5 % 3);
}
