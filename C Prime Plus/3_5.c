/*
 *    Date:  Wed Jul 28 04:53:29 PM CST 2021
 *    Goal:
 *           将用户年龄转换成秒数(一年有3.156x10^7秒)
 * */

#include <stdio.h>

int main(void)
{
    printf("Enter your ages: ");
    short ages;
    scanf("%hu", &ages);
    printf("You have %.3e seconds for use.\n", ages * 3.156e+7);

    return 0;
}

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    Enter your ages: 100
 *    You have 3.156e+09 seconds for use.
 *------------------------------------------------------
 *
 * */
