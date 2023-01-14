#include "stdio.h"

int main(void)
{
    // 指针与整数加减运算;
    int *i;
    i = (int *)0x123411;
    i = i + 1;
    printf("%p\n", i); // 等于123415
    i = i + 2;
    printf("%p\n", i); // 等于123415
    // 地址 = 源地址 + sizeof(数据类型) * 移动个数;

    // 指针与指针加法非法
    // unsigned int *j;
    // unsigned int *k;
    // unsigned int *x = j + k;
    // return 0;

    // 指针与指针减法可以
    int *i1;
    int *i2;

    // 返回距离多少个数据单位，可以为负，不足就舍去
    int *j1 = (int *)0x1234;
    int *j2 = (int *)0x1239;
    int dist = j2 - j1; //
    printf("%d\n", dist);

    // 指针与指针比较运算
    printf("%d\n", j1 <= j2);
}