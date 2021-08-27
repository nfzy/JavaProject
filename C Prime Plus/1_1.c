/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 10:08:02 AM CST 2021
 *    Effect:
 *          转换英寸和厘米的进制（1 inch = 2.54 cm）
 *-----------------------------------------------------
 *
 * */
#include <stdio.h>
#define INCH 2.54

int main(void)
{
    double inch;
    printf("Enter a number of inch: ");
    printf("        \b\b\b\b\b\b\b\b");
    scanf("%lf", &inch);
    printf("The inch convert centermeter is: %.2lf\n", inch * INCH);

    return 0;
}

/*
 *  在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *  Enter a number of inch: 100
 *  The inch convert centermeter is: 254.00
 *---------------------------------------------------------
 *
 * */
