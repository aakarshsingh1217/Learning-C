#include <stdio.h>
#include <ctype.h>   // for isspace, isdigit

int atoi_1(const char *s)

int main(int argc, char *argv[])
{
    char s = '1';

    printf("%d\n", s);

    return 0;
}


int atoi_1(const char *s) {
    int result = 0;
    int sign = 1;

    // 1. Skip whitespace
    while (isspace((unsigned char)*s)) {
        s++;
    }

    // 2. Handle sign
    if (*s == '+' || *s == '-') {
        if (*s == '-') {
            sign = -1;
        }
        s++;
    }

    // 3. Convert digits
    while (isdigit((unsigned char)*s)) {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}