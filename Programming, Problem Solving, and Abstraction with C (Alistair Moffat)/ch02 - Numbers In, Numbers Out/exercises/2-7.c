#include <stdio.h>

int main(void)
{
    int num, n; 
    double z; 
    char ch;

    num = -1; n = 99; z = 9.99; ch = '9';
    num = scanf("%d %lf %c", &n, &z, &ch);
    printf("num = %d", num);
    printf(", n = %d, z = %f, c = %c\n", n, z, ch);

    return 0;
}