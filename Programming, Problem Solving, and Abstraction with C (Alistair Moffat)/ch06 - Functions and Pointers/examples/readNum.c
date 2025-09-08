#define READ_OK 0
#define READ_ERROR 1

int read_num(int lo, int hi, int *num);

int read_num(int lo, int hi, int *num)
{
    int next;

    printf("Enter a number between %d and %d inclusive: ", lo, hi);

    while (scanf("%d", &next) == 1)
    {
        if (lo <= next && next <= hi)
        {
            *num = next;

            return READ_OK;
        }

        printf("%d is not between the specified vals.", next);
    }

    return READ_ERROR;
}