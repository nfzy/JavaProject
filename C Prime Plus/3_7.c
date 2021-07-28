/*
 *    Date:  Wed Jul 28 06:14:29 PM CST 2021
 *    Goal:
 *           将英尺转换为厘米
 * */

#include <stdio.h>

int main(void)
{
    float inch;
    printf("Enter your height: ");
    printf("___\b\b\b");
    scanf("%f", &inch);
    printf("CenterMeter is: %.2f\n", inch*2.54f);

    return 0;
}

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    Enter your height: 300
 *    CenterMeter is: 762.00
 *------------------------------------------------------
 *
 * */
