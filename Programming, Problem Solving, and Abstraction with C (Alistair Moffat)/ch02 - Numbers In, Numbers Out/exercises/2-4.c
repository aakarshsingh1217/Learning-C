#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);

    printf("FLT_MIN: %e\n", FLT_MIN);   // Smallest positive float
    printf("FLT_MAX: %e\n", FLT_MAX);   // Largest float

    printf("DBL_MIN: %e\n", DBL_MIN);   // Smallest positive double
    printf("DBL_MAX: %e\n", DBL_MAX);   // Largest double

    return 0;
}