#include <stdio.h>

int main()
{
    /*Print the Fahrenheit-Celcius Table for fahr = 0, 20, ..., 200 */
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;   // Lower limit of temperature table.
    upper = 300; // Upper limit.
    step = 20;   // Step size.

    fahr = lower;
    printf("fah\t\tcel\n"); // The escape character \t will be to insert a tabulation.
    while (fahr <= upper)
    {
        celcius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    /*Ex 1-4 Print the Celcius-Fahrenheit Table for fahr = 0, 20, ..., 200 */

    fahr = 0;
    celcius = 0;
    lower = 0;
    upper = 300;

    celcius = lower;
    printf("cel\t\tfah\n");
    while (celcius <= upper)
    {
        fahr = (9.0 / 5.0 * celcius) + 32.0;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }

    return 0;
}

/***********************************************************************************************************************************
 *  Here are examples of how to format the output for multiples bases and formatting.
 *  Assume that _ is a blank space.
 *
 *  %d      Print as decimal integer.                                                   ie: 12345
 *  %6d     Print as decimal integer, at least 6 characters wide.                       ie: %6d => _12345 or %10d => _____12345
 *  %f      Print as floating point.                                                    ie: 123.456001
 *  %6f     Print as floating point, at least 6 characters wide.                        ie: %6f => 123.456001 or __123.456001
 *  %.2f    Print as floating point, 2 characters after decimal point.                  ie: 123.46
 *  %6.2f   Print as floating point, at least 6 characters wide and 2 after decimal.    ie: 123.46 or ____12.46
 *  %o      Print as Octal.                                                             ie: 12345 => 30071
 *  %x      Print as Hexadecimal.                                                       ie: 12345 => 3039
 *  %s      Print character string. For array of char display.                          See example on string manipulations.
 ***********************************************************************************************************************************/