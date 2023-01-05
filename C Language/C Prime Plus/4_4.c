/*
 *	日期:	2022年 01月 17日 星期一 12:18:18 CST
 *
 *  功能:	提示用户输入身高(单位:英寸)和姓名,然后以下面的格式显示用户刚输入的信息:
 *              Zhouan, you are 6.208 feet tall
 *
 * */

#include <stdio.h>

int main(void)
{
    char name[40];
    float cm;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height: ");
    scanf("%f", &cm);
    printf("%s, you are %.3f meter height\n" , name, cm/100);

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter your name: Zhouan
 *  Enter your height: 620.8
 *  Zhouan, you are 6.208 meter height
 *
 *------------------------------------------------------
 *
 * */
