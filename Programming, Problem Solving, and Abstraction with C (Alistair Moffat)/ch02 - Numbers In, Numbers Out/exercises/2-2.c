#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g;
    a = 6;
    b = a + 3*4;
    c = b - b%4;
    d = b/3;
    e = a+b / 2;
    f = (a+b/2+c)/3;
    g = a-b+c-d+e-f;

    printf("a: %d\nb: %d\nc: %d\nd: %d\ne: %d\nf: %d\ng: %d\n", a, b, c, d, e, f, g);

    return 0;
}
