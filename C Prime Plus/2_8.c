/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 11:58:48 AM CST 2021
 *    Effect:
 *          函数嵌套调用(不是嵌套定义)
 *-----------------------------------------------------
 *
 * */

#include <stdio.h>

void two(void);
void one_three(void);
int main(void)
{
    printf("Starting now:\n");
    one_three();
    printf("Done!\n");
    return 0;
}

void one_three(void)
{
    printf("One\n");
    two();  // 注意不能在函数里嵌套定义函数，只能嵌套调用：void two();
    printf("Three\n");
}

void two(void)
{
    printf("Two\n");
}

/*
 *	在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *  Starting now:
 *  One
 *  Two
 *  Three
 *  Done!
 *---------------------------------------------------------
 *
 * */

