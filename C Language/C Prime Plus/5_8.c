/*
 *	日期:	2022年 01月 17日 星期一 20:11:53 CST
 *
 *  功能:	显示求模运算的结果。把用户输入的第 1 个整数作为求模运算符的第 2 个运算对象,该数在运算过程中保持不变。用户后面输入的数是第 1 个运算对象。当用户输入一个非正值时,程序结束。
 *
 * */

#include <stdio.h>

int main(void)
{
    puts("This program computes moduli.");
    int i_fir_num, i_sec_num;
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &i_sec_num);
    printf("Now enter the first operand: ");
    scanf("%d", &i_fir_num);
    while(i_fir_num > 0)
    {
        printf("%d %% %d is %d\n", i_fir_num, i_sec_num, i_fir_num % i_sec_num);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &i_fir_num);
    }
    puts("Done");

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  This program computes moduli.
 *  Enter an integer to serve as the second operand: 256
 *  Now enter the first operand: 438
 *  438 % 256 is 182
 *  Enter next number for first operand (<= 0 to quit): 1234567
 *  1234567 % 256 is 135
 *  Enter next number for first operand (<= 0 to quit): 0
 *  Done
 *
 *------------------------------------------------------
 *
 * */
