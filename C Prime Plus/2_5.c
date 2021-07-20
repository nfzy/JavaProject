/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 11:34:17 AM CST 2021
 *    Effect:
 *          自定义函数打印输出内容
 *-----------------------------------------------------
 *
 * */

#include <stdio.h>

void br();
void ic();
int main(void)
{
    br();
    putchar(',');
    ic();
    putchar('\n');
    ic();
    printf(",\n");
    br();
    putchar('\n');
    return 0;
}

void br()
{
    printf("Brazzil, Russia");
    return;
}

void ic()
{
    printf("India, China");
    return;
}

/*
 *	在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *  Brazzil, Russia,India, China
 *  India, China,
 *  Brazzil, Russia
 *---------------------------------------------------------
 *
 * */
