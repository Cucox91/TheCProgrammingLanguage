#include <stdio.h>

/*Print the Fahrenheit-Celcius Table for fahr = 0, 20, ..., 200 */
int main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;   // Lower limit of temperature table.
    upper = 300; // Upper limit.
    step = 20;   // Step size.

    fahr = lower;
    printf("f\t\tc\n"); // The escape character \t will be to insert a tabulation.
    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;

        /* Notice here that %d is a placeholder for the n-ary arguments of the printf statement to be replaced on the first statement. 
        And the number before the d (%nd) is to add indentaiton n digits wide. 
        I think d is used in the case of an integer.
        */
        printf("%3d\t%6d\n", fahr, celcius); 
        fahr = fahr + step;
    }

    return 1;
}