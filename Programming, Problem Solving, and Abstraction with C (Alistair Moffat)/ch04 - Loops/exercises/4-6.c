#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c, lines = 0, chars = 0, word_count = 0;
    bool inaword;
    printf("Enter text: \n");

    while((c = getchar()) != EOF)
    {
        chars++;
        if (c == '\n')
        {
            lines++;
        }
        if (c == ' ' || c == '\n')
        {
            inaword = true;
            word_count++;
        }
        inaword = false;
    }

    word_count;

    printf("Lines: %d\n", lines);
    printf("Chars: %d\n", chars);
    printf("Words: %d\n", word_count);

    return 0;
}
