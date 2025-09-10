#include <stdio.h>

#define SIZE 5

int main(void)
{
    int ints[SIZE][SIZE] = {0};
    int row_totals[SIZE] = {0};
    int col_totals[SIZE] = {0};

    // Input
    for (int i = 0; i < SIZE; i++) {
        printf("Enter row %d (%d integers): ", i + 1, SIZE);
        for (int j = 0; j < SIZE; j++) {
            if (scanf("%d", &ints[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            // accumulate sums while reading
            row_totals[i] += ints[i][j];
            col_totals[j] += ints[i][j];
        }
    }

    // Output row totals
    printf("Row totals: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", row_totals[i]);
    }
    printf("\n");

    // Output column totals
    printf("Column totals: ");
    for (int j = 0; j < SIZE; j++) {
        printf("%d ", col_totals[j]);
    }
    printf("\n");

    return 0;
}
