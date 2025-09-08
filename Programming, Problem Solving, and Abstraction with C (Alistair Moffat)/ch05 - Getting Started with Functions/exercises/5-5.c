#include <stdio.h>

int is_perfect(int n);
int next_perfect(int n);

int main(int argc, char* argv [])
{
    if (is_perfect(6))
    {
        printf("6 is a perfect number\n");
    }
    else
    {
        printf("6 is not a perfect number\n");
    }

    printf("Next perfect is: %d\n", next_perfect(6));

    return 0;
}