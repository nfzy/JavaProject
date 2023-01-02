#include <stdio.h>

void f(int *);
int main(void)
{
    int *p, i;
    i = 10;
    p = &i;
    printf("%p\n", p);
    f(p);
    printf("%p\n", p);

    return 0;
}

void f(int *q)
{
    *q = 100;
}