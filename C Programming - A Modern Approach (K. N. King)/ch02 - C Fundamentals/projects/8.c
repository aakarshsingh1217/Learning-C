#include <stdio.h>

#define MONTHS 12.0
#define NUM_PAYMENTS 3

int main(int argc, char *argv[])
{
    double loan_amt, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan_amt);
    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);

    double monthly_rate = (interest_rate / 100.0) / MONTHS;
    int i;

    for (i = 0; i < NUM_PAYMENTS; i++)
    {
        loan_amt = loan_amt - monthly_payment + (loan_amt * monthly_rate);
        printf("Balance remaining after payment %d: %.2lf\n", 
            i + 1, 
            loan_amt
        );
    }

    return 0;
}