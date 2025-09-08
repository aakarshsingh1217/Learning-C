#include <stdio.h>

#define SIZE 1000

void swap(int *num1, int *num2);
void sort_incr(int A[], int n);

int main(int argc, char *argv[])
{
    int init_vals[SIZE], final_vals[SIZE];
    int num = 0, init_count = 0, final_count = 0, i;
    printf("Enter as many as %d values: ", SIZE);

    while (scanf("%d", &num) == 1)
    {
        if (init_count < SIZE)
        {
            init_vals[init_count] = num;
            init_count++;
        }

        int found = 0;
        for (i = 0; i < final_count && !found; i++)
        {
            found = (final_vals[i] == num);
        }

        if (!found && final_count < SIZE)
        {
            final_vals[final_count] = num;
            final_count++;
        }
    }

    sort_incr(final_vals, final_count);
    printf("%d values read into array\n", init_count);
    printf("Before:");

    for (i = 0; i < init_count; i++)
    {
        printf("%4d", init_vals[i]);
    }

    printf("\n");
    printf("After :");

    for (i = 0; i < final_count; i++)
    {
        printf("%4d", final_vals[i]);
    }

    printf("\n");

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sort_incr(int A[], int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0 && A[j + 1] < A[j]; j--)
        {
            swap(&A[j], &A[j + 1]);
        }
    }
}