#include <stdio.h>

#define SIZE 5

int main(void) {
    int matrix[5][5] = {0}, student_total_score, quiz_total_score, quiz_high_score, quiz_low_score;

    for (int i = 0; i < SIZE; ++i) {
        printf("Enter %d quiz grades: ", i + 1);

        for (int j = 0; j < SIZE; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        student_total_score = 0;

        for (int j = 0; j < SIZE; ++j)
            student_total_score += matrix[j][i];


        printf("Student %d\n", i + 1);
        printf("\tTotal score: %d\n", student_total_score);
        printf("\tAverage score: %d\n", student_total_score / SIZE);
    }

    for (int i = 0; i < SIZE; ++i) {
        quiz_total_score = 0;
        quiz_high_score = matrix[i][0];
        quiz_low_score = matrix[i][0];

        for (int j = 0; j < SIZE; ++j) {
            quiz_total_score += matrix[i][j];

            if (quiz_high_score < matrix[i][j]) {
                quiz_high_score = matrix[i][j];
            }

            if (quiz_low_score > matrix[i][j]) {
                quiz_low_score = matrix[i][j];
            }
        }


        printf("Quiz %d\n", i + 1);
        printf("\tAverage score: %d\n", quiz_total_score / SIZE);
        printf("\tHigh score: %d\n", quiz_high_score);
        printf("\tLow score: %d\n", quiz_low_score);
    }

    return 0;
}
