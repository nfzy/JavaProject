/*
 *	日期:	2022年 01月 17日 星期一 12:14:16 CST
 *
 *  功能:	编写一个程序,读取一个浮点数,首先以小数点记数法打印,然后以指数记数法打印。用下面的格式进行输出(系统不同,指数记数法显示的位数可能不同):
 *              a.The input is 21.3 or 2.1e+001.
 *              b.The input is +21.290 or 2.129E+001.
 *
 * */

#include <stdio.h>

int main(void)
{
    printf("Enter number one: ");
    float fNum1, fNum2;
    scanf("%f", &fNum1);
    printf("The input is %.1f or %.1e\n", fNum1, fNum1);

    printf("Enter number two: ");
    scanf("%f", &fNum2);
    printf("The input is %+.3f or %.3E\n", fNum2, fNum2);

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *
 *  Enter number one: 21.3
 *  The input is 21.3 or 2.1e+01
 *  Enter number two: 21.290
 *  The input is +21.290 or 2.129E+01
 *
 *------------------------------------------------------
 *
 * */
