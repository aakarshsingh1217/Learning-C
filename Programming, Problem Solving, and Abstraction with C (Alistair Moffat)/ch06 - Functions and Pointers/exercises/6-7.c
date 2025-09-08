#include <stdio.h>

#define READ_OK 0
#define READ_ERROR 1

int read_num(int lo, int hi, int *num);

int read_num(int lo, int hi, int *num)
{
    /* Read numbers until one in the desired range from lo
    to hi is entered. Return that one as num. */
    if (lo > hi) {
        int temp = lo;
        lo = hi;
        hi = temp;
    }

    int next;

    printf("Enter a number between %d and %d inclusive: ", lo, hi);

    while (scanf("%d", &next) == 1)
    {
        /* got a number, so take a look at it */
        if (lo <= next && next <= hi)
        {
            *num = next;

            return READ_OK;
        }

        printf("%d is not between the specified vals.\n", next);
    }
    
    /* no valid numbers found, and scanf has failed */
    return READ_ERROR;
}

int main(int argc, char *argv[])
{
    int num = 0;
    if (read_num(20, 10, &num) == READ_OK) {
        printf("You entered valid number: %d\n", num);
    } else {
        printf("Input error!\n");
    }

    return 0;
}