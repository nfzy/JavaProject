#include <stdio.h>

void f(long *pArr)
{
    printf("%ld\n" ,*pArr);
    printf("%ld\n" ,*(pArr+1));
    printf("%ld\n" ,*pArr+10);
    printf("%ld\n" ,pArr[2]);
}
int main(void)
{
    long a[5] = {0 , 5 , -2 ,6 , 7};

    f(a);
    printf("%p\n", a);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);
}
