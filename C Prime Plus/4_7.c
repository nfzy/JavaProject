#include <stdio.h>
#include "float.h"

int main(void)
{
    float f = 1.0/3.0f;
    double d = 1.0/3.0;

    printf("%lf, %.12lf, %.16lf\n", d, d, d);
    printf("%f, %.12f, %.16f\n", f, f, f);
    printf("%i\n", FLT_DIG);
    printf("%i\n", DBL_DIG);
    return 0;
}
