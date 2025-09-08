#include <stdio.h>

#define MAX_INCR 7
#define MAX_DASHES 38
#define MAX_NUM 120

int main(void)
{
    char ch = ' ';
    int i, j, k, l;

    printf("     ");

    for (i = 0; i <= MAX_INCR; i++)
    {
        printf("   +%d", i);
    }

    printf("\n");
    printf("     +");

    for(j = 0; j <= MAX_DASHES; j++)
    {
        printf("-");
    }
    printf("\n");

    for(k = 32; k <= MAX_NUM; k += 8)
    {
        printf("%3d | ", k);
        for(l = 0; l <= MAX_INCR; l++)
        {
            printf("%4c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}