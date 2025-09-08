#include <stdio.h>

int my_isupper(char c);
char my_tolower(char c);

int main(int argc, char* argv[])
{
    printf("A: %d\n", 'A');
    printf("Z: %d\n", 'Z');
    printf("Is A uppercase?: %d\n", my_isupper('A'));
    printf("Is Z uppercase?: %d\n", my_isupper('Z'));
    printf("Is Q uppercase?: %d\n", my_isupper('Q'));

    printf("a: %d\n", 'a');
    printf("z: %d\n", 'z');

    return 0;
}

int my_isupper(char c)
{
    return c >= 65 && c <= 90;
}