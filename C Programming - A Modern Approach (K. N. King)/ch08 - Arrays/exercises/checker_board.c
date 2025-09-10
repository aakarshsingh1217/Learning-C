#include <stdio.h>

#define ROWS 6
#define COLS 6

int main(void)
{
    const char pieces[] = {'R', 'B'};
    char board[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            board[i][j] = pieces[(i + j + 1) % 2];
        }
    }

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}