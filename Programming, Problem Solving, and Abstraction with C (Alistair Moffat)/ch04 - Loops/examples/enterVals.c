#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int next;
    printf("Enter values, control-D to end: ");
    if (scanf("%d", &next) != 1)
    {
        printf("No data entered\n");
        exit(EXIT_FAILURE);
    }
    int n = 1;
    int max = next;
    while(scanf("%d", &next) == 1)
    {
        if (next > max)
        {
            max = next;
        }
        n++;
    }

    printf("%d values read, maximum is %d\n", n, max);

    return 0;
}