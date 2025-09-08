#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, divisor, is_prime = 0, next_prime;

    printf("Enter a value: ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nNo value entered.\n");
        exit(EXIT_FAILURE);
    }

    num++;

    while (is_prime == 0)
    {
        for (divisor = 2; divisor * divisor <= num; divisor++)
        {
            if (num % divisor == 0)
            {
                is_prime = 0;
                break;
            }
            else
            {
                is_prime = 1;
            }
        }
        
        if (is_prime)
        {
            next_prime = num;
        }

        num++;
    }

    printf("The next prime is : %d\n", next_prime);

    return 0;
}