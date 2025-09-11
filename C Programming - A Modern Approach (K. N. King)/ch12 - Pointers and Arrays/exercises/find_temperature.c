#include <stdbool.h>

#define DAYS 7
#define HOURS 24

bool search(const int a[], int n, int key);

int main(int argc, char *argv[])
{
    bool found_temp = false;
    int temperatures[DAYS][HOURS] = { 0 };

    for 
    (
        int (*row)[HOURS] = temperatures; 
        row < temperatures + DAYS;
        row++
    )
    {
        if (search(*row, HOURS, 25))
        {
            found_temp = true;
            printf("Temp found!\n");
            break;
        }
    }

    if (!found_temp)
    {
        printf("Temp not found.\n");
    }

    for 
    (
        int *p = temperatures[2];
        p < temperatures[2] + HOURS;
        p++
    )
    {
        printf("%d ", *p);
    }

    printf("\n");

    return 0;
}

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
        {
            return true;
        }
    }

    return false;
}
