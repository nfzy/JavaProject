/*
 *  2021年 05月 19日 星期三 17:04:15 CST
 *  目的：
 *      通过指针对两个数字数值进行交换
 *
 * */

#include <stdio.h>

void change(int *, int *);
void change_error(int *, int *);
int main(void)

{
    /*
    int *p, *q, a = 5;
    p = &a;
    p = q;
    free(q);

    printf("%d, %d, %d\n", *p, *q, a);
    */
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d, %d\n", a, b);

    change(&a, &b);
    printf("%d, %d\n", a, b);

    change_error(&a, &b);
    printf("%d, %d\n", a, b);

    char i = 5;
    int j = 10;
    char *p = &i;
    int *q = &j;
    printf("%lu, %lu\n", sizeof(p), sizeof(q));

    return 0;
}

void change(int *a, int *b)

{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

// 无法执行两个数字的交换
void change_error(int *a, int *b)

{
    int *t;
    t = a;
    a = b;
    b = t;
}
