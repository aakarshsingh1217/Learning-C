#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum, n, next;

    printf("Enter values, control-D to end: ");
    if (scanf("%d", &sum) != 1)
    {
        printf("\nNo data entered.\n");
        exit(EXIT_FAILURE);
    }

    n = 1;

    while (scanf("%d", &next) == 1)
    {
        sum += next;
        n++;
    }

    printf("%d values read, sum is: %d\n", n, sum);

    return 0;
}