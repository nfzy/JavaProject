/*
 *    Date:  Wed Aug  4 09:29:55 AM CST 2021
 *    Goal:
 *           通过输入数字计算圆的面积和周长
 * */

#include <stdio.h>
#define PI 3.14

int main(void)
{
    float area, circum, radius;
    printf("What's the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius *radius;
    circum = 2 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    What's the radius of your pizza?
 *    100
 *    Your basic pizza parameters are as follows:
 *    circumference = 628.00, area = 31400.00
 *------------------------------------------------------
 *
 * */
