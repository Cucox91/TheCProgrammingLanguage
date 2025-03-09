#include <stdio.h>

int main()
{
    int c, blanks, tabs, newLines;

    blanks = 0;
    tabs = 0;
    newLines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newLines;
    }

    printf("Blanks: %d\n", blanks);
    printf("tabs: %d\n", tabs);
    printf("New Lines: %d\n", newLines);

    return 1;
}