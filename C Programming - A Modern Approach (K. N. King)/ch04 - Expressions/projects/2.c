#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);


    int digit_1 = num / 100;
    int digit_2 = (num % 100) / 10;
    int digit_3 = (num % 10);

    printf("The reversal is: %d%d%d", digit_3, digit_2, digit_1);

    return 0;
}