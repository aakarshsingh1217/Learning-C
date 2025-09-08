#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1, num2, num3, num4, num5, num6,
        num7, num8, num9, num10, num11, num12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
        &num1, &num2, &num3, &num4, &num5, &num6,
        &num7, &num8, &num9, &num10, &num11, &num12
    );

    int check_digit = 9 - (((
        ((num2 + num4 + num6 + num8 + num10 + num12) * 3)
        + (num1 + num3 + num5 + num7 + num9 + num11)
        ) - 1) % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}