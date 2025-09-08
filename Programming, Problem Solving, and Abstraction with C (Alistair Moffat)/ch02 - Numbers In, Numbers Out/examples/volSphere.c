#include <stdio.h>

#define PI 3.141592653

int main(void)
{
    float radius;

    printf("Enter the radius of a sphere in meters: ");
    scanf("%f", &radius);

    float sphere_volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Volume of sphere (m^3): %.2f\n", sphere_volume);

    return 0;
}