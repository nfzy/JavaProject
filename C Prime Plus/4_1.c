/*
 *	日期:	2022年 01月 17日 星期一 11:52:10 CST
 *
 *  功能:	提示用户输入名和姓,然后以"名, 姓"的格式打印出来。
 *
 * */

#include <stdio.h>

int main(void)
{
    char first_name[10];
    char last_name[10];
    printf("Enter last name: ");
    scanf("%s", last_name);
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("%s, %s\n" ,last_name, first_name);

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *
 *  Enter last name: Zhou
 *  Enter first name: An
 *  Zhou, An
 *
 *------------------------------------------------------
 *
 * */
