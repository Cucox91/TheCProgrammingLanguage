#include <stdio.h>

int main()
{
    int x = 12345;
    float y = 123.456;

    printf("Integers \n");
    printf("%d \n", x);
    printf("%3d \n", x);
    printf("%6d \n", x);
    printf("%10d \n", x);
    printf("%12d \n", x);
    printf("%15d \n", x);

    printf("Floats \n");
    printf("%f \n", y);
    printf("%12f \n", y);
    printf("%.2f \n", y);
    printf("%10.2f \n", y);

    printf("%o \n", x);
    printf("%x \n", x);

    printf("%s \n", "sd");


    return 1;
}
