#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 123, *pi;
    double x = 456.789, *pd;

    printf("    n = %3d     x = %7.3f\n", n, x);

    pi = &n;
    pd = &x;

    printf("*pi = %3d, *pd = %7.3f\n", *pi, *pd);

    *pi += 1;
    *pd /= *pi;

    printf("*pi = %3d, *pd = %7.3f\n", *pi, *pd);
    printf("    n = %3d     x = %7.3f\n", n, x);

    return 0;
}