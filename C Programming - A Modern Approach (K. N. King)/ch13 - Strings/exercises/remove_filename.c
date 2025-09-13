#include <stdio.h>

void remove_filename(char *url)
{
    char *p = url;
    char *last_slash = NULL;

    while (*p) 
    {
        if (*p == '/') 
        {
            last_slash = p;
        }
        p++;
    }

    if (last_slash) 
    {
        *last_slash = '\0';
    }
}