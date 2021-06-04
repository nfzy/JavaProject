/*
 *  2021年 05月 18日 星期二 20:16:11 CST
 *  目的：
 *      判断是否为回文数
 *
 * */

#include <stdio.h>

int main(void)

{
    int a, num, val;
    printf("输入一个数字：");
    scanf("%d", &num);

    val = 0;
    a = num;
    while (a > 0) {
        val = val * 10 + a % 10;
        a /= 10;
    }
    if (val == num)
        printf("yes");
    else
        printf("No");
    putchar('\n');

    return 0;
}

/*
 *  由vim编写的结果为：
 *  --------------------------------------
 *  输入一个数字：1232332321
 *  yes
 *  --------------------------------------
 *
 * */
