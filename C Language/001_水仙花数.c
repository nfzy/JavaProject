#include <math.h>
#include <stdio.h>

int main(void)

{
    int i, j, k, n;
    for (n = 100; n < 1000; ++n)

    {
        i = n % 10;
        j = n / 10 % 10;
        k = n / 100.0;
        if (n == pow(i, 3) + pow(j, 3) + pow(k, 3))
            printf("%5d", n);
    }
    putchar('\n');

    return 0;
}
