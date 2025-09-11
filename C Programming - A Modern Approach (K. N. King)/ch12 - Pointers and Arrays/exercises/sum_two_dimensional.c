#define LEN 5

int sum_two_dimensional_array
(
    const int a[][LEN],
    int n
)
{
    int sum = 0;

    for 
    (
        const int *p = &a[0][0];
        p <= &a[n - 1][LEN - 1];
        p++
    )
    {
        sum += *p;
    }

    return sum;
}