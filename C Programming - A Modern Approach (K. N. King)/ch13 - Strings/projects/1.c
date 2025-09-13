#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LEN 20

int main(int argc, char * argv[])
{
    char smallest_word[MAX_LEN] = "";
    char largest_word[MAX_LEN] = "";
    int n = 0;

    while (true)
    {
        char word[MAX_LEN];

        printf("Enter word: ");
        scanf("%s", word);

        if (n == 0)
        {
            strcpy(smallest_word, word);
        }
        else if (strlen(word) == 4)
        {
            break;
        }
        else if (strcmp(word, smallest_word) < 0)
        {
            strcpy(smallest_word, word);
        }
        else if (strcmp(word, largest_word) > 0)
        {
            strcpy(largest_word, word);
        }

        n++;
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}