/*
 *	日期:	2022年 01月 17日 星期一 12:20:55 CST
 *
 *  功能:	提示用户输入以兆位每秒(Mb/s)为单位的下载速度和以兆字节(MB)为单位的文件大小。程序中应计算文件的下载时间。注意,这里 1 字节等于 8 位。使用 float 类型,并用/作为除号。该程序要以下面的格式打印 3 个变量的值(下载速度、文件大小和下载时间),显示小数点后面两位数字:
 *
 * */

#include <stdio.h>

int main(void)
{
    printf("Enter the speed(Mb/s): ");
    float fSpeed, fSize;
    scanf("%f", &fSpeed);
    printf("Enter the volume(MB): ");
    scanf("%f", &fSize);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",fSpeed ,fSize , fSize/fSpeed*8);

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter the speed(Mb/s): 18.12
 *  Enter the volume(MB): 2.20
 *  At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
 *
 *------------------------------------------------------
 *
 * */
