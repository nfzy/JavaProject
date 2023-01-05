#include <stdio.h>
#include "limits.h"
#include "float.h"

int main(void)
{
    printf("%ld,%ld\n", LONG_MAX, LONG_MIN);
    printf("%d,%d\n", SHRT_MAX, SHRT_MIN );
    printf("%d,%d, %d\n", CHAR_MAX, CHAR_MIN, CHAR_BIT);

    printf("%d,%d\n", DBL_DIG, FLT_DIG);
    return 0;
}
