#include <string.h>

// my version

void censor(char *str)
{
    for 
    (
        char *p = str;
        *(p + 2) != '\0';
        p++
    )
    {
        if
        (
            *p == 'f' &&
            *(p + 1) == 'o' &&
            *(p + 2) == 'o'
        )
        {
            *p = 'x';
            *(p + 1) = 'x';
            *(p + 2) = 'x';
            p += 2;
        }
    }
}

// best version

void censor(char *str)
{
    for (char *p = str; *(p + 2) != '\0'; p++) {
        if (strncmp(p, "foo", 3) == 0) {
            p[0] = 'x';
            p[1] = 'x';
            p[2] = 'x';
        }
    }
}