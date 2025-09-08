#include <stdio.h>

#define SIZE 1000

// swap helper
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// sort by student_numbers, keep marks in sync
void sort_by_student(int students[], int marks[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0 && students[j+1] < students[j]; j--) {
            swap(&students[j], &students[j+1]);
            swap(&marks[j], &marks[j+1]);
        }
    }
}

int main(void) {
    int students[SIZE], marks[SIZE];
    int n = 0;

    // read input: student_number mark
    while (n < SIZE && scanf("%d %d", &students[n], &marks[n]) == 2) {
        n++;
    }

    // sort by student_number
    sort_by_student(students, marks, n);

    // print sorted output
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", students[i], marks[i]);
    }

    return 0;
}