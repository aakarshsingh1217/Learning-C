#include <stdio.h>

void swap(int *num1, int *num2) {
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void selection_sort(int A[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int max_index = 0;

        // find index of max element in [0..i]
        for (int j = 1; j <= i; j++) {
            if (A[j] > A[max_index]) {
                max_index = j;
            }
        }

        // place max at end
        swap(&A[i], &A[max_index]);
    }
}

int main(void) {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("n: %d\n", n);

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}