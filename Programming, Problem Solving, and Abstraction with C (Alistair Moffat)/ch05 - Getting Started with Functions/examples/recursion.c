#include <stdio.h>

int t_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + t_rec(n - 1);
    }
}

int main(int argc, char *argv[])
{
    printf("t_rec(3): %d\n", t_rec(3));

    return 0;
}