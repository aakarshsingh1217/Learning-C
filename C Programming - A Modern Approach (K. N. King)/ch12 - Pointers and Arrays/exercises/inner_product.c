double inner_product
(
    const double *a,
    const double *b,
    int n
);

double inner_product(const double *a, const double *b, int n)
{
    double sum = 0.0;

    const double *pa, *pb;

    for (pa = a, pb = b; pa < a + n; pa++, pb++) 
    {
        sum += (*pa) * (*pb);
    }

    return sum;
}