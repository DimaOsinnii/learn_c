#include <stdio.h>

int main(void) {
    int size;

    printf("This program creates a magic square of a specified size.\n"
        "The size must be an odd number between 1 and 99.\n"
        "Enter size of magic square: ");
    scanf("%d", &size);

    int row = 0, column = size / 2, next_row, nex_column;
    int magic_square[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            magic_square[i][j] = 0;
        }
    }

    magic_square[row][column] = 1;

    for (int i = 2; i <= size * size; i++) {
        next_row = row == 0 ? size - 1 : row - 1;
        nex_column = column == size - 1 ? 0 : column + 1;

        if (magic_square[next_row][nex_column]) {
            next_row = row == size - 1 ? 0 : row + 1;
            nex_column = column;
        }

        row = next_row;
        column = nex_column;

        magic_square[row][column] = i;
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("\t%d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
