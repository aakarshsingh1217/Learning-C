#include <stdio.h>

void sort_2(int *p1, int *p2);
void sort_3(int *p1, int *p2, int *p3);

int main(int argc, char *argv[])
{
    int x = 4, y = 3;
    printf("x:%2d, y:%2d\n", x, y);
    sort_2(&x, &y);
    printf("x:%2d, y:%2d\n", x, y);
    int a = 6, b = 4, c = 7;
    printf("a:%2d, b:%2d, c:%2d\n", a, b, c);
    sort_3(&a, &b, &c);
    printf("a:%2d, b:%2d, c:%2d\n", a, b, c);

    return 0;
}

void sort_2(int *p1, int *p2)
{
    if (*p1 > *p2) 
    {
        int t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
}

void sort_3(int *p1, int *p2, int *p3)
{
    sort_2(p1, p2);
    sort_2(p2, p3);
    sort_2(p1, p2);
}
