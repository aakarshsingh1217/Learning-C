#include <stdio.h>
#include <stdbool.h>

int sum_of_factors(int num);
bool is_amicable_pair(int num1, int num2);

int main(int argc, char* argv[])
{
    if (is_amicable_pair(220, 284))
    {
        printf("Amicable pair!\n");
    }

    return 0;
}

bool is_amicable_pair(int num1, int num2)
{
    printf("Sum of factors for num1: %d, "
           "Sum of factors for num2: %d\n",
            sum_of_factors(num1), 
            sum_of_factors(num2));

    return sum_of_factors(num1) == num2 && sum_of_factors(num2) == num1;
}

int sum_of_factors(int num)
{
    int i, sum = 1;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}