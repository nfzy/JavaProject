/*
 *
 *	日期:	Wed 26 Jan 2022 04:40:19 AM EST
 *	
 *	目标:	编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。提示：strlen()函数（第 4 章介绍过）可用于计算数组最后一个字符的下标
 *
 *
 * */

#include <stdio.h>
#include "string.h"

int main(void)
{
    char array[40];

    printf("Enter string: ");
    scanf("%s", array);

    for(int i = strlen(array); i >= 0; --i)
        printf("%c", array[i]);
    putchar('\n');
    for(int i = 0; i < strlen(array); ++i)
        printf("%c", array[i]);
    putchar('\n');

    return 0;
}
