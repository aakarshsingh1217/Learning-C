#include <stdio.h>
#include <stdlib.h>

#define CELSIUS_TO_FARENHEIT_CHANGE_FLOAT (9.0 / 5.0)
#define FARENHEIT_TO_CELSIUS_CHANGE_FLOAT (5.0 / 9.0)
#define CONVERSION_FACTOR 32
#define CELSIUS 'C'
#define FARENHEIT 'F'

int main(void)
{
    float temp; char temp_type; float new_temp;

    printf("Enter a temperature: ");
    if (scanf("%f%c", &temp, &temp_type) != 2)
    {
        printf("Error, 2 values weren't entered.\n");
        exit(EXIT_FAILURE);
    }

    if (temp_type == 'C')
    {
        new_temp = (temp * CELSIUS_TO_FARENHEIT_CHANGE_FLOAT) + CONVERSION_FACTOR;
        printf("The temperature %.1f%c converts to %.1f%c\n", temp, temp_type, new_temp, FARENHEIT);
    }
    else
    {
        new_temp = (temp - CONVERSION_FACTOR) * FARENHEIT_TO_CELSIUS_CHANGE_FLOAT;
        printf("The temperature %.1f%c converts to %.1f%c\n", temp, temp_type, new_temp, CELSIUS);
    }

    return 0;
}