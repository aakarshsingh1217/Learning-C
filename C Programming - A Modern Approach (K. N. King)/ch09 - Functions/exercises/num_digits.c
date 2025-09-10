#include <stdio.h>

int num_digits(int n);

int num_digits(int n)
{
    int digit_count = 0;

    while (n != 0)
    {
        n /= 10;
        digit_count++;
    }

    return digit_count;
}

int main(int argc, char *argv[])
{
    printf("Digit count 1: %d\n", num_digits(123));
    printf("Digit count 2: %d\n", num_digits(24));

    return 0;
}