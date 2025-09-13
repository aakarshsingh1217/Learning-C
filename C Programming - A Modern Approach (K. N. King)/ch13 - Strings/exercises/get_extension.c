#include <string.h>

void get_extension(const char *file_name, char *extension)
{
    int len = strlen(file_name);
    const char *dot = file_name + len;

    while (dot > file_name && *dot != '.')
    {
        dot--;
    }

    if (dot == file_name || *dot != '.')
    {
        strcpy(extension, "");
    }
    else
    {
        strcpy(extension, dot + 1);
    }
}