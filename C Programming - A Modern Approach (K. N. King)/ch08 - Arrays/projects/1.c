#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SEEN_SIZE 10

int main(void) {
    bool seen[SEEN_SIZE] = {false};
    bool repeated[SEEN_SIZE] = {false};
    long n;

    printf("Enter a number: ");
    if (scanf("%ld", &n) != 1) return 1;
    if (n < 0) n = labs(n);          // handle negatives gracefully

    if (n == 0) 
    {
        // special-case 0 (it “repeats” only if there are multiple zeros)
        seen[0] = true;
    }

    while (n > 0) 
    {
        int d = n % 10;
        if (seen[d]) 
        {
            repeated[d] = true;      // mark as repeated, but keep scanning
        } 
        else 
        {
            seen[d] = true;
        }
        n /= 10;
    }

    int any = 0;
    for (int i = 0; i < SEEN_SIZE; i++) 
    {
        if (repeated[i]) 
        {
            if (!any) printf("Repeated digit(s): ");
            printf("%d ", i);
            any = 1;
        }
    }
    if (any) 
    {
        printf("\n");
    } 
    else 
    {
        printf("No repeated digit\n");
    }
    return 0;
}
