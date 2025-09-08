#include <stdbool.h>

int next_perfect(int n)
{
    n++;
    int next_perf;

    while (true)
    {
        if (is_perfect(n))
        {
            next_perf = n;
            break;
        }

        n++;
    }

    return next_perf;
}