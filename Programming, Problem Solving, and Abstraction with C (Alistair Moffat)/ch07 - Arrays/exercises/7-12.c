#include <stdio.h>
#include <string.h>

int is_palindrome(char *str);

int main(int argc, char *argv)
{
    char *palindrome = "rats live on no evil star";
    char *non_palindrome = "poggers";

    if (is_palindrome(palindrome))
    {
        printf("********\n");
        printf("Success!\n");
    }

    if (!is_palindrome(non_palindrome))
    {
        printf("********\n");
        printf("Success!\n");
    }

    return 0;
}

int is_palindrome(char *str)
{
    int i = 0;
    int str_len = (int)strlen(str) - 1;

    while (i < str_len)
    {
        printf("s[%d] (i): %c\n", i, str[i]);
        printf("s[%d] (str_len): %c\n", str_len, str[str_len]);
        if (str[i] != str[str_len])
        {
            return 0;
        }
        i++;
        str_len--;
    }

    return 1;
}