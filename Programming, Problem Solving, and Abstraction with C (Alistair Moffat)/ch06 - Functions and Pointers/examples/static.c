#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 3, z = 5;
    printf("main: x=%2d, z=%2d\n", x, z);
    func(x);
    printf("main: x=%2d, z=%2d\n", x, z);
    func(z);
    printf("main: x=%2d, z=%2d\n", x, z);

    return 0;
}

void func(int x)
{
    static int z = 7;
    x += 1;
    z += x + 1;
    printf("&x: %16p\n&z:%16p\n", &x, &z);
    printf("func: x=%2d, z=%2d\n", x, z);
}