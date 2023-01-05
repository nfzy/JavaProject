#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a width: ");
    scanf("%d", &width);
    printf("The number is: |%0*d|.\n", width , number);
    printf("Now enter a width and a precision: ");
    scanf("%d %d", &width, &precision);
    printf("Weight = |%0*.*f|\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}
