/*
 *	日期:	2022年 01月 17日 星期一 20:06:28 CST
 *
 *  功能:	其能计算整数的平方和(可以认为第 1 天赚$1、第 2 天赚$4、第 3 天赚$9,以此类推,这看起来很不错)。C 没有平方函数,但是可以用 n * n 来表示 n 的平方。
 *
 * */

#include <stdio.h>

int main(void)
{
    int i_count, i_sum, i_day;
    i_count = i_sum = 0;

    printf("Enter days for you: ");
    scanf("%d", &i_day);
    while (i_day > 0)
    {
        while(i_count++ < i_day)
            i_sum += i_count * i_count;
        printf("sum = %d\n", i_sum);
        i_count = i_sum = 0;
        printf("Enter day for you: ");
        scanf("%d", &i_day);
    }
    puts("bye");

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter days for you: 12
 *  sum = 650
 *  Enter day for you: 1
 *  sum = 1
 *  Enter day for you: 2
 *  sum = 5
 *  Enter day for you: 3
 *  sum = 14
 *  Enter day for you: 4
 *  sum = 30
 *  Enter day for you: 0
 *  bye
 *
 *------------------------------------------------------
 *
 * */
