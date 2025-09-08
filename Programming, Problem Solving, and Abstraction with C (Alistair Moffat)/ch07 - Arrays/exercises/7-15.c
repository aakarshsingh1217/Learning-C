#include <stdio.h>
#include <string.h>

#define SIZE 50

int is_anagram(char *str1, char *str2);

int main(int argc, char *argv[])
{
    is_anagram("hello", "hi");

    return 0;
}

int is_anagram(const char *s1, const char *s2) {
    // Quick length check: if different, can't be anagrams
    size_t n1 = strlen(s1), n2 = strlen(s2);
    if (n1 != n2) return 0;

    int counts[256] = {0}; // ASCII

    for (size_t i = 0; i < n1; i++) {
        unsigned char c = (unsigned char)s1[i];
        counts[c]++;
    }
    for (size_t i = 0; i < n2; i++) {
        unsigned char c = (unsigned char)s2[i];
        counts[c]--;
    }
    for (int c = 0; c < 256; c++) {
        if (counts[c] != 0) return 0;
    }
    return 1;
}
