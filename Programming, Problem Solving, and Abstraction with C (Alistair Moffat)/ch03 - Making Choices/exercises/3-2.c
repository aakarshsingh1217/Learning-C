// a
/*
i = 7

prints: i=7 j=4
*/

// b
/*
if(true && false)
else
j=5
if(3*3 > 7)
k=9

prints: i=3 j=5 k=9
*/

// e
/*
prints: x=1 y=2
y = 4
prints: x=1 y=4
*/

// f
/*
prints: y is greater
*/

#include <stdio.h>

int main(void)
{
    int x = 0; int y = 0;

    if (y < x)
    {
        printf("1\n");
    }
    else if (y = x)
    {
        printf("2\n");
    }
    else
    {
        printf("3\n");
    }

    return 0;
}