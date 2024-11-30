#include <stdio.h>

#define SIZE 5

int main(void) {
    const int matrix[5][5] = {0};

    for (int i = 0; i < SIZE; ++i) {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < SIZE; ++j) {
            scanf("%d", &matrix[i][j]);
        }

    }

    printf("Row totals: ");

    for (int i = 0; i < SIZE; ++i) {
        int row_totals = 0;

        for (int j = 0; j < SIZE; ++j) {
            row_totals += matrix[i][j];
        }

        printf(" %d", row_totals);
    }


    printf("\nColumn totals: ");

    for (int i = 0; i < SIZE; ++i) {
        int column_totals = 0;

        for (int j = 0; j < SIZE; ++j) {
            column_totals += matrix[j][i];
        }

        printf(" %d", column_totals);
    }

    return 0;
}
