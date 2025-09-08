#include <stdio.h>

#define SIZE 1000

int main(void) {
    int arr[SIZE], n = 0, x;

    // read input
    while (n < SIZE && scanf("%d", &x) == 1) {
        arr[n++] = x;
    }

    // freq table: col 0 = key, col 1 = count
    int freq[n][2];
    int k = 0;                      // number of distinct keys so far

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int found = 0;

        // search existing keys
        for (int j = 0; j < k; j++) {
            if (freq[j][0] == key) {
                freq[j][1]++;       // increment count
                found = 1;
                break;
            }
        }

        // not found -> add new row (key, 1)
        if (!found) {
            freq[k][0] = key;
            freq[k][1] = 1;
            k++;
        }
    }

    // print result
    for (int j = 0; j < k; j++) {
        printf("%d -> %d\n", freq[j][0], freq[j][1]);
    }
    return 0;
}