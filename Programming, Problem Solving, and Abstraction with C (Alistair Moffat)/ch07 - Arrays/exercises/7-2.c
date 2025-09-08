#include <stdio.h>

void swap(int *num1, int *num2);
void sort_decr(int A[], int n);

int main(int argc, char *argv[])
{
    int A[] = {1, 8, 15, 3, 17, 12, 4, 8, 4};
    int n = 9, i;

    for (i = 0; i < n; i++)
    {
        printf("A[%d]: %d\n", i, A[i]);
    }

    sort_decr(A, n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("A[%d]: %d\n", i, A[i]);
    }

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sort_decr(int A[], int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0 && A[j + 1] > A[j]; j--)
        {
            swap(&A[j], &A[j + 1]);
        }
    }
}