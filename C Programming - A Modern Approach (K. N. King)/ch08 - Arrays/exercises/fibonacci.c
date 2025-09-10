#include <stdio.h>

#define SIZE 40

int main(void)
{
    long long fib[SIZE];

    for (int i = 0; i < SIZE; i++) 
    {
        if (i == 0) 
        {
            fib[i] = 0;
        } 
        else if (i == 1) 
        {
            fib[i] = 1;
        } 
        else 
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        printf("%lld", fib[i]);
        
        if (i < SIZE - 1) 
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
