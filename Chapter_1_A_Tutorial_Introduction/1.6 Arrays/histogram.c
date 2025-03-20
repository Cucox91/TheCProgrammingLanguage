#include <stdio.h>

#define IN 1            // Inside of a Word.
#define OUT 0           // Out of a Word.
#define ARRAY_LENGHT 10 // For how many words do we want to store the lenght.
#define BRACKETS 10     // Histogram Categorization Brackets.

int main()
{
    // Variable Declaration
    int c, count, wordLenght, state;
    int wLenghts[ARRAY_LENGHT];
    int lenghtOccurrence[BRACKETS];

    // Variable Initialization
    state = OUT;
    count = wordLenght = 0;
    for (int i = 0; i < ARRAY_LENGHT; ++i)
    {
        wLenghts[i] = 0;
    }

    for (int i = 0; i < BRACKETS; ++i)
    {
        lenghtOccurrence[i] = 0;
    }

    // Count Word Length and store it.
    while (count < ARRAY_LENGHT && ((c = getchar()) != EOF))
    {
        ++wordLenght;
        if (c == ' ' || c == '\n' || c == '\t' || c == '\n')
        {
            state = OUT;
            wLenghts[count] = wordLenght - 1;
            ++count;
            wordLenght = 0;
        }
        else if (state == OUT)
        {
            state = IN;
        }
    }

    // Add Similar Lenght Occurrences.
    for (int i = 0; i < ARRAY_LENGHT; ++i)
    {
        if (wLenghts[i] > 9)
        {
            lenghtOccurrence[9]++;
        }
        else
        {
            lenghtOccurrence[wLenghts[i] - 1]++;
        }
    }

    // Print histogram.
    printf("Word Lenght / Occurrences: \n");

    for (int i = 0; i < BRACKETS; ++i)
    {
        printf("%d\t", i + 1);
        int blockCount = 0;
        while (blockCount < 2 * (lenghtOccurrence[i] + 1))
        {
            printf("\xE2\x96\x92");
            ++blockCount;
        }
        printf("\n");
    }

    return 0;
}