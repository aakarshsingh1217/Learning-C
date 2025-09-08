#include <stdio.h>

void int_divide
(
    int numerator, 
    int denominator,
    int *quotient, 
    int *remainder
);

int main(int argc, char *argv[])
{
    int numerator = 17, denominator = 5, quotient = 0, remainder = 0;
    int_divide(numerator, denominator, &quotient, &remainder);

    printf("Quotient: %d\nRemainder: %d\n", quotient, remainder);

    return 0;
}

void int_divide
(
    int numerator, 
    int denominator,
    int *quotient, 
    int *remainder
)
{
    *quotient = numerator / denominator;
    *remainder = numerator % denominator;
}