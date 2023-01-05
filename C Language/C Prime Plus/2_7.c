/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 11:48:25 AM CST 2021
 *    Effect:
 *          函数被调用一次就打印一次Smile!
 *-----------------------------------------------------
 *
 * */

#include <stdio.h>

void smile(int);
int main(void)
{
    smile(3);
    putchar('\n');
    smile(2);
    putchar('\n');
    smile(1);
    putchar('\n');
    return 0;
}

void smile(int count)
{
    for (int i = 0; i<count; ++i)
        printf("Smile!");
}

/*
 *	在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *  Smile!Smile!Smile!
 *  Smile!Smile!
 *  Smile!
 *---------------------------------------------------------
 *
 * */
