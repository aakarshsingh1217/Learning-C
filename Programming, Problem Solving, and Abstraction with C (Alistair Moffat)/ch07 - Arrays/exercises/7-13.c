#include <stdio.h>

int strlen_1(char *s);
char *strcat_1(char *dest, char *src);

int main(int argc, char *argv[])
{
    char str[20] = "hello";   // enough space for "hello" + "hi"
    char str2[]   = "hi";

    printf("%s has %d characters\n%s has %d characters\n",
            str, strlen_1(str), str2, strlen_1(str2));

    return 0;
}

int strlen_1(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        s++;
        ++len;
    }

    return len;
}

char *strcat_1(char *dest, char *src)
{
    char *p = dest;

    // move p to the end of dest
    while (*p != '\0') {
        p++;
    }

    // copy characters from src
    while (*src != '\0') {
        *p = *src;
        p++;
        src++;
    }

    // add null terminator
    *p = '\0';

    return dest;
}
