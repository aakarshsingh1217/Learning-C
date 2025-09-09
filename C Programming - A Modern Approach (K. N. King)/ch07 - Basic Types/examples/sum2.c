#include <stdio.h>

int main(int argc, char *argv[])
{
    long n, sum = 0;

    printf("This prog. sums a series of ints.\n");
    printf("Enter ints (0 to terminate): ");

    scanf("%1d", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%1d", &n);
    }

    printf("The sum is: %1d\n", sum);

    return 0;
}
