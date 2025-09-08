#include <limits.h>

static long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

int n_choose_k(int n, int k) {
    if (k < 0 || n < 0 || k > n) return 0;
    long long num   = factorial(n);
    long long denom = factorial(k) * factorial(n - k);
    long long val   = num / denom;   // exact integer mathematically
    // Beware: this may exceed int range for modest n.
    if (val > INT_MAX) return INT_MAX;  // or handle differently
    return (int)val;
}