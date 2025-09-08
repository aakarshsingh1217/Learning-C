#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int next, i;

    printf("Enter numbers: ");

    // Loop until EOF (Ctrl+D)
    while (scanf("%d", &next) == 1)
    {
        // Print number right-aligned in width 2, then " |"
        printf("%2d |", next);

        // Print stars
        for (i = 0; i < next; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nNo more numbers.\n");
    return 0;
}