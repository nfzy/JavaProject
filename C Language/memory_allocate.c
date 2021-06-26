#include <stdio.h>
#include <malloc.h>

void f(int **q)
{
    int i = 5000;
    *q = &i;
}
int main(void)
{
    int *p;
    f(&p);
    printf("%d\n" , *p);
}



