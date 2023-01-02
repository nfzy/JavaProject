#include <stdio.h>

int main(void)
{
    int *p;
    int i = 10;
    int j;

    p = &i;
    *p = i;
    printf("i = %d, j = %d, *p = %d\n", i, j, *p);

    double a[] = {1, 2, 3, 4, 5};

    // a[3]相当于*(a+3)
    // 地址相差i * sizeof(a);
    printf("%p\n", a + 1);
    printf("%p\n", a + 2);
    printf("%p\n", a + 3);
    printf("%lf, %lf\n", a[4], *a + 4);

    return 0;
}