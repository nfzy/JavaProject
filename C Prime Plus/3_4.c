/*
 *    Date:  Wed Jul 28 04:45:39 PM CST 2021
 *    Goal:
 *           分别以小数、指数、十六位进制数打印
 * */

#include <stdio.h>

int main(void)
{
    double f_num;
    printf("Enter a float value: _________\b\b\b\b\b\b\b\b\b");
    scanf("%lf", &f_num);
    printf("fixed-point notation: %lf\n", f_num);
    printf("exponential notation: %e\n" , f_num);
    printf("p notation: %a\n" , f_num);
    return 0;
}

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    Enter a float value: 3.1415926
 *    fixed-point notation: 3.141593
 *    exponential notation: 3.141593e+00
 *    p notation: 0x1.921fb4d12d84ap+1
 *------------------------------------------------------
 *
 * */
