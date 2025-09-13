#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension)
{
    while (*file_name != '.' && *file_name)
    {
        file_name++;
    }

    if (*file_name == '\0') 
    {
        return false;
    }

    file_name++;

    while (*file_name != '\0')
    {
        if (toupper(*file_name) != toupper(*extension))
        {
            return false;
        }

        file_name++;
        extension++;
    }

    return true;
}