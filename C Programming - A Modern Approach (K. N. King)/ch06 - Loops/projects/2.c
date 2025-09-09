#include <stdio.h>

int main(int argc, char *argv[])
{
    int m, n;

    printf("Enter two integers: ");

    if (scanf("%d %d", &m, &n) != 2)
    {
        printf("Invalid input.\n");
    }

    if (n == 0)
    {
        printf("Greatest common divisor: %d\n", m);
    }

    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}