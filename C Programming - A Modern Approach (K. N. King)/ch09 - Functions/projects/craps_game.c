#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(int argc, char *argv[])
{
    srand((unsigned) time(NULL));
    char play_again = 'y';
    int wins = 0, losses = 0;

    while (play_again == 'y')
    {
        if (play_game())
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }

        printf("\nPlay again?: ");
        scanf(" %c", &play_again);
        printf("\n");
    }

    printf("Wins: %d Losses: %d", wins, losses);

    return 0;
}

bool play_game(void)
{
    int n = 0, point = 0;

    while (true)
    {
        int current_roll = roll_dice();
        printf("You rolled: %d\n", current_roll);

        if (n == 0)
        {
            if (current_roll == 7 || current_roll == 11)
            {
                return true;
            }
            else if 
            (
                current_roll == 2 || 
                current_roll == 3 ||
                current_roll == 12
            )
            {
                return false;
            }
            else
            {
                point = current_roll;
                printf("Your point is %d\n", point);
            }
        }
        else
        {
            if (current_roll == point)
            {
                return true;
            }
            else if (current_roll == 7)
            {
                return false;
            }
        }

        n++;
    }
}

int roll_dice(void)
{
    return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}
