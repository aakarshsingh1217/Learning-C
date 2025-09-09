#include <stdio.h>

int main(int argc, char *argv[])
{
    int breeze;

    printf("Enter wind speed in knots: ");

    if (scanf("%d", &breeze) != 1)
    {
        printf("Invalid input.\n");

        return 1;
    }

    if (breeze <= 1)
    {
        printf("Calm\n");
    }
    else if (breeze <= 3)
    {
        printf("Light air\n");
    }
    else if (breeze <= 27)
    {
        printf("Breeze\n");
    }
    else if (breeze <= 47)
    {
        printf("Gale\n");
    }
    else if (breeze <= 63)
    {
        printf("Storm\n");
    }
    else
    {
        printf("Hurricane\n");
    }

    return 0;
}