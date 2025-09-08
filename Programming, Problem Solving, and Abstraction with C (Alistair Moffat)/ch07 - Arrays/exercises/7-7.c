#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int count_freq(int A[], int n);

int main(int argc, char *argv[])
{
    int arr[SIZE] = {1, 3, 3, 5, 2, 7, 9, 8, 8};
    int max_num = count_freq(arr, 9);

    printf("Max num: %2d\n", max_num);

    return 0;
}

int count_freq(int A[], int n)
{
    int freq_vals[SIZE] = {0}, freq_count[SIZE] = {0};
    int i, j, freq_iters = 0;

    for (i = 0; i < n; i++)
    {
        bool found = false;

        for (j = 0; j < freq_iters; j++)
        {
            if (A[i] == freq_vals[j])
            {
                found = true;
                freq_count[j] += 1;
                break;
            }
        }

        if (!found)
        {
            freq_vals[freq_iters] = A[i];
            freq_count[freq_iters] = 1;
            freq_iters++;
        }
    }

    // find value with max frequency
    int max_val = freq_vals[0];
    int max_freq = freq_count[0];

    for (int j = 1; j < freq_iters; j++)
    {
        if (freq_count[j] > max_freq)
        {
            max_freq = freq_count[j];
            max_val = freq_vals[j];
        }
        else if (freq_count[j] == max_freq && freq_vals[j] < max_val)
        {
            // tie: pick the smaller value
            max_val = freq_vals[j];
        }
    }

    return max_val;
}
