/*
 *	日期:	2022年 01月 17日 星期一 12:26:00 CST
 *
 *  功能:	提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数,显示小数点后面一位数字。接下来,使用 1 加仑大约 3.785 升,1 英里大约为 1.609 千米,把单位是英里/加仑的值转换为升/100 公里(欧洲通用的燃料消耗表示法),并显示结果,显示小数点后面 1 位数字。注意,美国采用的方案测量消耗单位燃料的行程(值越大越好),而欧洲则采用单位距离消耗的燃料测量方案(值越低越好)。使用#define 创建符号常量或使用 const 限定符创建变量来表示两个转换系数。
 *
 * */

#include <stdio.h>

int main(void)
{
    float fMileAge, fGallon;
    printf("Enter the travel way: ");
    scanf("%f", &fMileAge);
    printf("Enter the travel use: ");
    scanf("%f", &fGallon);
    printf("每加仑汽油行驶的英里数: %.2f\n", fMileAge/fGallon);

    #define GALLON 3.785
    #define MILE 1.609
    printf("%.1f\n", GALLON/1.609*100);

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter the travel way: 256
 *  Enter the travel use: 128
 *  每加仑汽油行驶的英里数: 2.00
 *  235.2
 *
 *------------------------------------------------------
 *
 * */
