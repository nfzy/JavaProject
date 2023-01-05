/*
 *	日期:	2022年 01月 17日 星期一 17:03:59 CST
 *
 *  功能:	提示用户输入天数,然后将其转换成周数和天数。例如,用户输入18,则转换成2周4天。
 *
 * */

#include <stdio.h>

int main(void)
{
    short s_date, s_week, s_day;
    printf("Enter Days: ");
    scanf("%hd", &s_date);
    while(s_date > 0)
    {
        s_week = s_date / 7;
        s_day = s_date % 7;
        printf("%hd days have %hd weeks, %hd days.\n", s_date, s_week, s_day);
        printf("Enter Days: ");
        scanf("%hd", &s_date);
    }
    printf("Bye\n");

    return 0;
}


/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter Days: 18
 *  18 days have 2 weeks, 4 days.
 *  Enter Days: 19
 *  19 days have 2 weeks, 5 days.
 *  Enter Days: 20
 *  20 days have 2 weeks, 6 days.
 *  Enter Days: 21
 *  21 days have 3 weeks, 0 days.
 *  Enter Days: 0
 *  Bye
 *
 *------------------------------------------------------
 *
 * */
