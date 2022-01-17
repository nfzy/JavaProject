/*
 *	日期:	2022年 01月 17日 星期一 16:57:35 CST
 *
 *  功能:	用分钟表示的时间转换成用小时和分钟表示的时间。使用#define或const创建一个表示60的符号常量或const变量。通过while循环让用户重复输入值,直到用户输入小于或等于0的值才停止循环。
 *
 * */

#include <stdio.h>

#define HOUR 60

int main(void)
{
    int i_minute, i_hour;

    printf("Enter A Number Of Minutes: ");
    scanf("%i", &i_minute);
    while (i_minute > 0)
    {
        i_hour = i_minute / HOUR;
	i_minute = i_minute % HOUR;
        printf("The time is %d hours %d minutes\n", i_hour, i_minute);
        printf("Enter A Number Of Minutes: ");
        scanf("%i", &i_minute);
    }
    printf("Got it!\n");

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter A Number Of Minutes: 60
 *  The time is 1 hours 0 minutes
 *  Enter A Number Of Minutes: 69
 *  The time is 1 hours 9 minutes
 *  Enter A Number Of Minutes: -36
 *  Got it!
 *
 *------------------------------------------------------
 *
 * */
