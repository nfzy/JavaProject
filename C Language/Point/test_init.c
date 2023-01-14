#include "stdio.h"

int main(void)
{
    char *cPtr;  // 指向char类型的指针
    int *iPtr;   // 执行int类型的指针
    float *fPtr; // 指向float类型的指针

    int *p;
    // *p = 1;  // error 指针p未初始化。地址是随机的
    int i;
    p = &i;
    *p = 1;

    // 默认习惯
    int *P = NULL; // 表示地址为0的地址，无法使用，读写都会报错
    *P = 2;
    printf("%d\n", *P);
    return 0;
}