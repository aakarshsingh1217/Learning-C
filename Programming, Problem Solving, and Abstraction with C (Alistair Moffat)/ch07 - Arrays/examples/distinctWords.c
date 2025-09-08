#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORDS 1000
#define MAXCHARS 10

typedef char word_t[MAXCHARS + 1];
int getword(word_t W, int limit);

int main(int argc, char *argv[])
{
    word_t one_word, all_words[MAXWORDS];
    int num_distinct = 0, totwords = 0, i, found;

    while(getword(one_word, MAXCHARS) != EOF)
    {
        totwords += 1;
        found = 0;

        for(i = 0; i < num_distinct && !found; i++)
        {
            found = (strcmp(one_word, all_words[i]) == 0);
        }

        if(!found && num_distinct < MAXWORDS)
        {
            strcpy(all_words[num_distinct], one_word);
            num_distinct += 1;
        }
    }

    printf("%d words read\n", totwords);

    for (i = 0; i < num_distinct; i++)
    {
        printf("word #%d is \"%s\"\n", i, all_words[i]);
    }

    return 0;
}

int getword(char W[], int limit)
{
    int c, len = 0;

    while ((c = getchar()) != EOF && !isalpha(c))
    {

    }

    if (c == EOF)
    {
        return EOF;
    }

    W[len++] = c;

    while (len < limit && (c = getchar()) != EOF && isalpha(c))
    {
        W[len++] = c;
    }

    W[len] = '\0';

    return 0;
}
