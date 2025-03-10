#include <stdio.h>

#define IN 1  // Inside a Word.
#define OUT 0 // Outside a Word.

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != '-')
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("Lines: %d\nWords:%d\nCharacters:%d\n", nl, nw, nc);

    return 1;
}