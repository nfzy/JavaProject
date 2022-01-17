/*
 *	日期:	2022年 01月 17日 星期一 20:08:09 CST
 *
 *  功能:	提示用户输入一个 double 类型的数,并打印该数的立方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。
 *
 * */


#include <stdio.h>

double cube(double);

int main(void)
{
    double d_num;
    printf("Enter a number: ");
    while(scanf("%lf", &d_num) == 1)
    {
        printf("The number's cube is %lf.\n", cube(d_num));
        printf("Enter a number(input char will exit): ");
    }
    puts("Done!");

    return 0;
}

double cube(double d_num)
{
    return d_num * d_num * d_num;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *
 *  Enter a number: 2.0
 *  The number's cube is 8.000000.
 *  Enter a number(input char will exit): 0.1
 *  The number's cube is 0.001000.
 *  Enter a number(input char will exit): 0.3 
 *  The number's cube is 0.027000.
 *  Enter a number(input char will exit): a
 *  Done!
 *
 *------------------------------------------------------
 *
 * */
