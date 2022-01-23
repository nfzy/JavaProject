/*
 *	日期:	Sun Jan 23 19:04:50 CST 2022
 *
 *	目标:	创建一个包含26个元素的数组，并在其中储存26个小写字母。然后打印数组的所有内容。
 *
 * */

#include <stdio.h>

int main(void)
{
    const int I_NUM = 26;
    int i_count;
    char ch[I_NUM];
    for (i_count = 0; i_count < I_NUM; ++i_count) {
        ch[i_count] = 'a' + i_count;
    }

    for (i_count = 0; i_count < I_NUM; ++i_count) {
        printf("%c", ch[i_count]);
    }
    putchar('\n');

    return 0;
}


/*
 *
 *
 *
 *
 *
 * */
