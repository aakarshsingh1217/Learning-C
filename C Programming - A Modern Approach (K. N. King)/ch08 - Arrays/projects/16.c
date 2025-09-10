#include <stdio.h>
#include <stdbool.h>

#define SIZE 20
#define ALPHABET_SIZE 26

int main(int argc, char * argv[])
{
    char word1[SIZE], word2[SIZE], seen[ALPHABET_SIZE] = {0}, c, d;
    int i = 0;

    printf("Enter first word: ");

    while (((c = getchar()) != '\n' && i < 20))
    {
        seen[c - 'a'] += 1;
        word1[i++] = c;
    }

    i = 0;

    printf("Enter second word: ");
    while (((d = getchar()) != '\n' && i < 20))
    {
        seen[d - 'a'] -= 1;
        word2[i++] = d;
    }

    bool is_anagram = true;

    for (i = 0; i < ALPHABET_SIZE; i++)
    {
        if (seen[i] != 0)
        {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}