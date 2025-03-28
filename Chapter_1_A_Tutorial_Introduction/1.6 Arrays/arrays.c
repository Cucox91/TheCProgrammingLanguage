#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    // Initializer to 0;
    for (int i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0']; // This will convert from char to digit (int). Arithmetic Ops.
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", ndigit[i]);
    }

    printf(", white spaces = %d, other = %d\n", nwhite, nother);

    return 0;
}