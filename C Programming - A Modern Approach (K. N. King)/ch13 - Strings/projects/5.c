#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;

    for (char **p = &argv[0]; *p != NULL; p++)
    {
        sum += atoi(*p);
    }

    printf("Total: %d\n", sum);
}