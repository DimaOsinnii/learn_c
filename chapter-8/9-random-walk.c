#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define LETTERS 26

int main(void) {
    srand(time(NULL));

    const char alphabet[LETTERS] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
        'W', 'X', 'Y', 'Z'
    };
    char map[SIZE][SIZE];
    bool taken_steps[4] = {false};


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            map[i][j] = '.';
        }
    };

    int step, step_count = 0, x = rand() % 4, y = rand() % 4, current_letter_idx = -1;

    while (alphabet[current_letter_idx] != 'Z') {
        step = rand() % 4;
        step_count = 0;

        for (int i = 0; i < 4; i++) {
            if (taken_steps[i]) {
                step_count++;
            }
        }

        if (step_count == 4) break;

        int next_y = y, next_x = x;

        if (step == 0 && y - 1 >= 0 && map[x][y - 1] == '.')
            --next_y;
        else if (step == 1 && x - 1 >= 0 && map[x - 1][y] == '.')
            --next_x;
        else if (step == 2 && y + 1 < SIZE && map[x][y + 1] == '.')
            ++next_y;
        else if (step == 3 && x + 1 < SIZE && map[x + 1][y] == '.')
            ++next_x;
        else
            taken_steps[step] = true;


        if (next_x == x && next_y == y) continue;

        x = next_x;
        y = next_y;

        map[x][y] = alphabet[++current_letter_idx];

        for (int i = 0; i < 4; ++i) {
            taken_steps[i] = false;
        }
    }


    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf(" %c", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}
