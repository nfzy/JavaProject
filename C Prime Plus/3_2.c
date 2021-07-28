/*
 *    Date:  Wed Jul 28 01:39:28 PM CST 2021
 *    Goal:
 *           键盘输入一个字符，将输入的字符再次打印出来
 *
 * */

#include <stdio.h>

int main(void)
{
    printf("Enter a character: ");
    putchar(getchar());
    putchar('\n');

    return 0;
}

/*
 *在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    Enter a character: a
 *    a
 *------------------------------------------------------
 *
 * */
