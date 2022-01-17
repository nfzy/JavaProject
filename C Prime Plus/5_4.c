/*
 *	日期:	2022年 01月 17日 星期一 19:59:03 CST
 *
 *  功能:	提示用户输入一个身高(单位:厘米),并分别以厘米和英寸为单位显示该值,允许有小数部分。程序应该能让用户重复输入身高,直到用户输入一个非正值。
 *	        1 feet = 12 inch
 *	        1 inch ≈ 2.54 cm
 *	        1 feet ≈ 2.54 * 12 = 30.48 cm
 *
 * */

#include <stdio.h>
#define FEET 12
#define INCH 2.54

int main(void)
{
    int i_feet;
    float f_cm, f_inch;
    printf("Enter a height in centimeters: ");
    scanf("%f", &f_cm);
    while(f_cm > 0)
    {
        i_feet = f_cm / INCH / FEET;
        f_inch = f_cm / INCH - i_feet * FEET;
        printf("%.1f cm = %d feet, %.1f inches\n", f_cm, i_feet, f_inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &f_cm);
    }
    puts("Done!");
    
    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *
 *  Enter a height in centimeters: 182
 *  182.0 cm = 5 feet, 11.7 inches
 *  Enter a height in centimeters (<=0 to quit): 168.7
 *  168.7 cm = 5 feet, 6.4 inches
 *  Enter a height in centimeters (<=0 to quit): 0
 *  Done!
 *
 *------------------------------------------------------
 *
 * */
