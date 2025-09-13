#include <ctype.h>

void capitalize(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
        }

        i++;
    }
}

void capitalize(char *str)
{
    for (char *p = str; *p != '\0'; p++) {
        if (isalpha((unsigned char)*p)) {
            *p = toupper((unsigned char)*p);
        }
    }
}