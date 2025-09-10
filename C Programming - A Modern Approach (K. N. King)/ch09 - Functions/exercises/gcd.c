int gcd(int m, int n);

int gcd(int m, int n)
{
    if (n == 0)
    {
        return m;
    }

    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}