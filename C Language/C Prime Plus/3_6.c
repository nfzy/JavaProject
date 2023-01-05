/*
 *    Date:  Wed Jul 28 04:59:43 PM CST 2021
 *    Goal:
 *           显示水分子的数量(1个水分子的质量约为3.0×10^(−23)克,1夸脱水大约是950克)
 *
 * */

#include <stdio.h>

int main(void)
{
    printf("Please enter a quart of water: ");
    float quart_num;
    printf("______\b\b\b\b\b\b");
    scanf("%f" , &quart_num);
    printf("There are %.3f grams\n" , 950*quart_num);
    printf("The number of water molecules is: %lf\n" , 950*quart_num/3.0e-2);

    return 0;
}

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    Please enter a quart of water: 300000
 *    There are 285000000.000 grams
 *    The number of water molecules is: 9500000000.000000
 *------------------------------------------------------
 *
 * */
