#include <stdio.h>

int int_pow(int num, int pow);

int main(int argc, char* argv[])
{   
    int num = 3;
    int pow = 4;
    printf("int_pow(3, 4) = %d\n", int_pow(num, pow));

    return 0;
}

int int_pow(int num, int pow)
{
    int i;
    int val = 1;
    for (i = 0; i < pow; i++)
    {
        val *= num;
    }

    return val;
}