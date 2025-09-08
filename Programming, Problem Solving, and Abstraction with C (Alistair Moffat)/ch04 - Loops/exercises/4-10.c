#include <stdio.h>

int main(void) {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '/') {
            int next = getchar();
            if (next == '/') {
                putchar('/');
                putchar('*');

                while ((ch = getchar()) != EOF && ch != '\n') {
                    putchar(ch);
                }

                putchar(' ');
                putchar('*');
                putchar('/');

                if (ch == '\n') {
                    putchar('\n');
                }
            } else {
                putchar('/');
                if (next != EOF) {
                    putchar(next);
                }
            }
        } else {
            putchar(ch);
        }
    }
    return 0;
}