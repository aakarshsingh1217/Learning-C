/* Prints a table of compound interest (monthly compounding, annual rows) */

#include <stdio.h>

#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];
    #define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d   ", year);
        for (i = 0; i < NUM_RATES; i++) {
            double monthly_rate = (low_rate + i) / 1200.0;  // annual% -> monthly decimal
            for (int m = 0; m < 12; ++m)
                value[i] *= 1.0 + monthly_rate;            // compound monthly
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}