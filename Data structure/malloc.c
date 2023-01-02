#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int a[5] = {99, 10, 3, 2, 4};

    int len;
    scanf("%d", &len);
    int *pArr = (int *)malloc(sizeof(int) * len);

    return 0;
}