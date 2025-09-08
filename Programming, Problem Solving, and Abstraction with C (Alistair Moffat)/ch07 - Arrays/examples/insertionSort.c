#include <stdio.h>

#define N 9

void swap(int *num1, int *num2);

int main(int argc, char *argv[])
{
    int A[N];
    int i, j;

    A[0] = 1;
    A[1] = 8;
    A[2] = 15;
    A[3] = 3;
    A[4] = 17;
    A[5] = 12;
    A[6] = 4;
    A[7] = 8;
    A[8] = 4;

    for(i = 0; i < N; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    for (i = 1; i < N; i++)
    {
        for (j = i - 1; j >= 0 && A[j + 1] < A[j]; j--)
        {
            swap(&A[j], &A[j + 1]);
        }
    }

    for(i = 0; i < N; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}