#include <stdio.h>

//The Lines below (#define) are named Symbolic Constants. They add clarity to the code. Is a good practice to use them every time is a number or text defined on the project that will be constant alongside the project.
#define LOWER 0   // Lower limit of table
#define UPPER 300 // Upper limit of table
#define STEP 20   // Step size

int main()
{
    int fahr;

    printf("Direct \n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 1;
}