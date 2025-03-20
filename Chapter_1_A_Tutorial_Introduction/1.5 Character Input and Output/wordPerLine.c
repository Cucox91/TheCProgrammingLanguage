#include <stdio.h>


int main()
{
    int c;

    while ((c = getchar())!= '-')
    {
        if( c == ' ' ||c == '\n' || c == '\t')
        {
            putchar('\n');
        }
    }
    
    return 0;
}