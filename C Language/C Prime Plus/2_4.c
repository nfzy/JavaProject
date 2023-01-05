/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 11:27:54 AM CST 2021
 *    Effect:
 *          调用自定义函数进行打印输出
 *-----------------------------------------------------
 *
 * */

#include <stdio.h>

void jolly();
void deny();
int main(void)
{
    jolly();
    deny();

    return 0;
}

void jolly()
{
    for (int i = 0; i < 3; ++i) 
       printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny!\n");
}

/*
 *	在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *  For he's a jolly good fellow!
 *  For he's a jolly good fellow!
 *  For he's a jolly good fellow!
 *  Which nobody can deny!
 *---------------------------------------------------------
 *
 * */
