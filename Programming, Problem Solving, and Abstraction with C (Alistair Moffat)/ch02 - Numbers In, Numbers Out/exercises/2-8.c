#include <stdio.h>

int main(void)
{
    float farenheit;
    printf("Degrees farenheit?: ");
    scanf("%f", &farenheit);

    float celsius = (farenheit - 32) * (5.0/9.0);

    printf("Celsius: %.1f\n", celsius);

    return 0;
}