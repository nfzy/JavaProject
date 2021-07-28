/*
 *    Date:  Wed Jul 28 02:12:29 PM CST 2021
 *    Goal:
 *           打印文本以及使用转义字符
 * */

#include <stdio.h>

int main(void)
{

    putchar(48);
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");

    return 0;
}

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    0Startled by the sudden sound, Sally shouted,
 *    "By the Great Pumpkin, what was that!"
 *------------------------------------------------------
 *
 * */
