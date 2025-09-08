#include <stdio.h>

int all_zero(int A[], int n);

int main(int argc, char *argv[])
{
    int arr1[] = {0, 0, 0, 0};
    int arr2[] = {0, 0, 1, 0};

    if (all_zero(arr1, 4))
    {
        printf("arr 1 has all zeroes!\n");
    }

    if (!all_zero(arr2, 4))
    {
        printf("arr 2 doesn't have all zeroes!\n");
    }

    return 0;
}

int all_zero(int A[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}
