#include <stdio.h>

#define MIN_RATE 2
#define MAX_RATE 7
#define MONTHLY_AMT 100
#define MAX_YEARS 7

int main(void)
{
    int rate, year, month;
    double balance, monthly_rate;

    printf("Monthly savings of $%d, ", MONTHLY_AMT);
    printf("with monthly compounded interest\n");
    printf("Annual rate   |");
    for (rate = MIN_RATE; rate <= MAX_RATE; rate++)
    {
        printf("%4d%%  ", rate);
    }
    printf("\n");

    for (year = 1; year <= MAX_YEARS; year++)
    {
        printf("After %d years | ", year);

        for (rate = MIN_RATE; rate <= MAX_RATE; rate++)
        {
            balance = 0.0;
            monthly_rate = 1.00 + ((rate / 100.00) / 12);

            for (month = 1; month <= 12 * year; month++)
            {
                balance *= monthly_rate;
                balance += MONTHLY_AMT;
            }

            printf("%5.0f  ", balance);
        }

        printf("\n");
    }

    return 0;
}