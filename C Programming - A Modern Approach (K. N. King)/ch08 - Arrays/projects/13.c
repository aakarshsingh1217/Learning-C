#include <stdio.h>
#include <ctype.h>

#define SIZE 20

int main(void)
{
    char first[SIZE], last[SIZE];
    int i = 0, j = 0;
    int ch;

    printf("Enter a first and last name: ");
    
    while ((ch = getchar()) != EOF && !isspace(ch) && i < SIZE - 1) 
    {
        first[i++] = ch;
    }

    first[i] = '\0';
    
    while ((ch = getchar()) != EOF && isspace(ch))
        ;
    
    if (ch != EOF) 
    {
        last[j++] = ch;

        while ((ch = getchar()) != EOF && !isspace(ch) && j < SIZE - 1) 
        {
            last[j++] = ch;
        }
    }

    last[j] = '\0';
    printf("You entered the name: %s, %c.\n", last, first[0]);

    return 0;
}