#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid input.\n");
    }

    printf("Even squares between 1 and %d:\n", n);

    for (int i = 2; i * i <= n; i += 2)
    {
        printf("%d\n", i * i);
    }

    return 0;
}