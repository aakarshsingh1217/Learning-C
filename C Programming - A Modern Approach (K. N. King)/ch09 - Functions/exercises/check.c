#include <stdio.h>

int check(int x, int y, int n);

int check(int x, int y, int n)
{
    return 
    (
        (x >= 0 && x <= (n-1))
        &&
        (y >= 0 && y <= (n-1))
    );
}