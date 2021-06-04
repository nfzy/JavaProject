/*
 *  2021年 05月 18日 星期二 22:06:00 CST
 *  目的：
 *      求给定数字内的所有素数
 *  功能：
 *      通过三个函数的循环求出给定范围的素数
 *
 * */

#include <stdio.h>

int sort(int);
void number(int);
int main(void)

{
    int val;
    printf("请输入一个数字：");
    scanf("%d", &val);
    number(val);
    return 0;
}

void number(int m)

{
    int i;
    for (i = 2; i <= m; i++)
        if (sort(i))
            printf("%d\n", i);
}

int sort(int m)

{
    int i;
    for (i = 2; i < m; ++i)
        if (m % i == 0) {
            return 0;
        }
    if (m == i)
        return 1;
    else
        return 0;
}

/*
 *  在vim下的结果是：
 *  ------------------------------------------
 *  请输入一个数字：
 *  15
 *  2
 *  3
 *  5
 *  7
 *  11
 *  13
 *  ------------------------------------------
 *
 * */
