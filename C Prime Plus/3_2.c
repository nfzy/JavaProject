/*
 *    Date:  Wed Jul 28 01:39:28 PM CST 2021
 *    Goal:
 *           键盘输入一个字符，将输入的字符再次打印出来
 *
 * */

#include <stdio.h>

int main(void)
{
    int i_ascii;
    printf("Enter a ascii number: ");
    scanf("%d", &i_ascii);
    printf("The ascii %d is %c.\n", i_ascii, i_ascii);

    return 0;
}

/*
 *在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    Enter a iaracter: a
 *    a
 *------------------------------------------------------
 *
 * */
