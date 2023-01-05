/*
 *	日期:	2022年 01月 17日 星期一 20:04:11 CST
 *
 *  功能:	修改程序 addemup.c(程序清单 5.13),你可以认为 addemup.c 是计算 20 天里赚多少钱的程序(假设第 1 天赚$1、第 2 天赚$2、第 3 天赚$3,以此类推)。修改程序,使其可以与用户交互,根据用户输入的数进行计算(即,用读入的一个变量来代替 20)。
 *
 * */

#include <stdio.h>

void change();

int main(void)
{
    change();

    return 0;
}

void change()
{
    int i_sum, i_count, i_num;
    i_sum = i_count = 0;
    printf("Enter a number: ");
    scanf("%d", &i_num);
    while(i_num > 0)
    {
        while(i_count++ < i_num)
            i_sum += i_count;
        printf("The number's sum is %d.\n", i_sum);
        i_sum = i_count = 0;
        printf("Enter a number: ");
        scanf("%d", &i_num);
    }
    puts("Done!");
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter a number: 20
 *  The number's sum is 210.
 *  Enter a number: 1
 *  The number's sum is 1.
 *  Enter a number: 2
 *  The number's sum is 3.
 *  Enter a number: 3
 *  The number's sum is 6.
 *  Enter a number: 5
 *  The number's sum is 15.
 *  Enter a number: 0
 *  Done!
 *
 *------------------------------------------------------
 *
 * */
