#include <stdio.h>

int is_perfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    printf("%d = %d?\n", n, sum);

    return n == sum;
}