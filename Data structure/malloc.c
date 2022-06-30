#include <stdio.h>
#include <malloc.h>


int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};

    int len;
    printf("Enter a num: ");
    scanf("%d", &len);
    int *pArr = (int *)malloc(sizeof(int) * len);

    free(pArr);

    return 0;
}
