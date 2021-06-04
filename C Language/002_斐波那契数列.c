/*
 *  2021年 05月 16日 星期日 20:14:10 CST
 *  目的：
 *      输出斐波那契数列
 *
 * */

#include <stdio.h>

// 递归实现
int recursion(int);

int main(void)

{
    int i, n, f1, f2, next;
    f1 = 0, f2 = 1;

    printf("输出几项斐波那契数列：");
    scanf("%d", &n);

    /*
    printf("斐波那契数列：");
    for (i = 1; i <= n; ++i) {
        printf("%d ", f1);
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    putchar('\n');
    */

    for (i = 1; i <= n; n--)
        printf("%d ", recursion(n));
    putchar('\n');
    return 0;
}

int recursion(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return recursion(n - 1) + recursion(n - 2);
}

/*
 *  在linux's vim下的输出结果是：
 *  -------------------------------------
 *  输出几项斐波那契数列：6
 *  5 3 2 1 1 0
 *  -------------------------------------
 *
 * */
