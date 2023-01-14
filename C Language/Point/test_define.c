#include "stdio.h"

int main(void)
{
    char *cPtr;  // 指向char类型的指针
    int *iPtr;   // 执行int类型的指针
    float *fPtr; // 指向float类型的指针

    int *i1, i2 = 0; // 指针变量， 整形变量
    int *i3, *i4;
    printf("%d, %d\n", sizeof(i1), sizeof(i2));
    printf("%d, %d\n", sizeof(i3), sizeof(i4));

    // 二级指针
    int *p = &i2;
    *p = 3;
    int **i = &p;
    printf("%d\n", sizeof(i));
    printf("%d\n", **i);

    // 取地址运算符(&)
    int x = 1;
    printf("%p\n", &x);

    printf("%d\n", x == *(&x));
    return 0;
}