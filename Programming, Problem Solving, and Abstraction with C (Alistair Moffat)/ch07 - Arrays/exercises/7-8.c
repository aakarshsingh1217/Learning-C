#include <stdio.h>

int inversion_count(const int A[], int n) {
    int inv = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            printf("A[%d]: %d > A[%d]: %d\n",
                    i, A[i], j, A[j]);
            if (A[i] > A[j]) {
                printf("*****TICK******\n");
                inv++;
            }
        }
    }
    return inv;
}

int main(void) {
    int A[] = {10, 13, 16, 18, 15, 22, 21};
    int n = sizeof A / sizeof A[0];
    printf("Inversions: %d\n", inversion_count(A, n)); // prints 3
    return 0;
}