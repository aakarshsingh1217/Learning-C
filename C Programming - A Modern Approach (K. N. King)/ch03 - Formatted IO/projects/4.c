#include <stdio.h>

int main(int argc, char *argv[])
{
    int x1, x2, x3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &x1, &x2, &x3);
    printf("You enter %d.%d.%d\n", x1, x2, x3);

    return 0;
}