void store_zeros(int a[], int n);

void store_zeros(int a[], int n)
{
    int *p;

    for (p = a; p < a + n; p++)
    {
        *p = 0;
    }
}