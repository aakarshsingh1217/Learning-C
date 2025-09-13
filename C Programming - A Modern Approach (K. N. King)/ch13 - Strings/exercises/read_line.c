int read_line(char str[], int n)
{
    int ch, i = 0;

    // skip leading whitespace
    while ((ch = getchar()) != '\n' && isspace(ch))
        ;

    // if we stopped because of newline, we’re done
    if (ch == '\n') 
    {
        str[0] = '\0';
        return 0;
    }

    // store the first non-space character
    if (i < n)
        str[i++] = ch;

    // now read the rest until newline or more whitespace
    while ((ch = getchar()) != '\n' && !isspace(ch)) 
    {
        if (i < n)
            str[i++] = ch;
    }

    str[i] = '\0';
    return i;
}