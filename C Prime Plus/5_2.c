/*
 *	日期:	2022年 01月 17日 星期一 16:58:31 CST
 *
 *  功能:	提示用户输入一个整数,然后打印从该数到比该数大10的所有整数(例如,用户输入5,则打印5~15的所有整数,包括5和15)。要求打印的各值之间用一个空格、制表符或换行符分开。
 *
 * */

#include <stdio.h>

#define BIG 10

int main(void)
{
    int i_numb, i_count;
    printf("Enter A Number: ");
    scanf("%d", &i_numb);
    i_count = i_numb + BIG;
    while (i_numb <= i_count)
        printf("%-5d", i_numb++);
    puts("\nDone!");

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *
 *  Enter A Number: 15
 *  15   16   17   18   19   20   21   22   23   24   25   
 *  Done!
 *
 *------------------------------------------------------
 *
 * */
