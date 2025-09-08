#include <stdio.h>

void int_swap(int *p1, int *p2);

int main(int argc, char* argv[])
{
    int x = 2, y = 3;
    printf("main: x=%2d, y=%2d\n", x, y);
    int_swap(&x, &y);
    printf("main: x=%2d, y=%2d\n", x, y);

    return 0;
}

void int_swap(int *p1, int *p2)
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}