#include <stdio.h>

int main()
{
    int c;
    int repeated;

    repeated = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && repeated == 0)
        {
            // printf("%s", c);
            putchar(c);
            repeated = 1;
        }
        else if (c == ' ' && repeated)
        {
            continue;
        }
        else
        {
            // printf("%s", c);
            putchar(c);
            repeated = 0;
        }
    }

    return 1;
}