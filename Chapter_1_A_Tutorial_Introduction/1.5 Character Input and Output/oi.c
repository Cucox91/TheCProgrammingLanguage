#include <stdio.h>

// The code below is not reliable. Come back later and understand what is happening. current is a char, but is being readed and printed a string on the screen. And we get a truncation when we use the printf because it recognize the char.
int main()
{
    char current;

    while (current != '`')
    {
        current = getchar();

        putchar(current);
        printf("%s", current);
    }

    return 0;
}