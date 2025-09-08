#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int max_val;

    printf("Enter a max value: ");
    if (scanf("%d", &max_val) != 1) {
        printf("\nNo value entered.\n");
        exit(EXIT_FAILURE);
    }

    int longest_len = 0;        // length of the longest cycle
    int longest_seed = 1;       // seed that produced it
    long max_value_seen = 0;    // largest number reached across all sequences

    for (int seed = 1; seed <= max_val; ++seed) {
        long n = seed;          // use long for safety
        int len = 1;            // count terms including the seed

        while (n != 1) {
            if (n % 2 == 0) n /= 2;
            else            n = 3 * n + 1;

            if (n > max_value_seen) max_value_seen = n;
            ++len;
        }

        if (len > longest_len) {
            longest_len = len;
            longest_seed = seed;
        }
    }

    printf("Longest cycle: %d, seed that started it: %d\n",
           longest_len, longest_seed);
    printf("Max value seen in any sequence: %ld\n", max_value_seen);

    return 0;
}