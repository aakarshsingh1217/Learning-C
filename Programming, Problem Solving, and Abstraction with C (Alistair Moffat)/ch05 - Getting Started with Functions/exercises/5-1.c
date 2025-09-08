#include <stdio.h>

int max_2_ints(int num1, int num2);
int max_4_ints(int num1, int num2, int num3, int num4);

int main(int argc, char* argv[])
{
    int num1 = 3, num2 = 4, num3 = 4, num4 = 6;

    printf("max_2_ints(3, 4): %d\n",
            max_2_ints(num1, num2)
    );

    printf("max_2_ints(4, 4): %d\n",
            max_2_ints(num3, num2)
    );

    printf("max_4_ints(3, 4, 4, 6): %d\n",
            max_4_ints(num1, num2, num3, num4)
    );

    return 0;
}

int max_2_ints(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }

    return num2;
}

int max_4_ints(int num1, int num2, int num3, int num4)
{
    int max_of_num1_and_num2 = max_2_ints(num1, num2);
    int max_of_num3_and_num4 = max_2_ints(num3, num4);

    return max_2_ints(max_of_num1_and_num2, max_of_num3_and_num4);
}