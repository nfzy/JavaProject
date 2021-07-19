#include <stdio.h>

int main(void)
{
    float a, b;

    b = 2.0e10 + 1.0;
    a = b - 2.0e10;

    printf("%f\n" , a);

    return 0;
}
