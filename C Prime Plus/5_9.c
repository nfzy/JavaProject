/*
 *	日期:	2022年 01月 17日 星期一 20:13:40 CST
 *
 *  功能:	要求用户输入一个华氏温度。程序应读取 double 类型的值作为温度值,并把该值作为参数传递给一个用户自定义的函数 Temperatures()。该函数计算摄氏温度和开氏温度,并以小数点后面两位数字的精度显示 3 种温度。要使用不同的温标来表示这 3 个温度值。
 *          下面是华氏温度转摄氏温度的公式:
 *              摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
 *          下面是摄氏温度转开氏温度的公式:
 *              开氏温度 = 摄氏温度 + 273.16
 *          Temperatures()函数中用 const 创建温度转换中使用的变量。
 *          在 main()函数中使用一个循环让用户重复输入温度,当用户输入 q 或其他非数字时,循环结束。scanf()函数返回读取数据的数量,所以如果读取数字则返回 1,如果读取 q 则不返回 1。
 *          可以使用==运算符将 scanf()的返回值和 1 作比较,测试两值是否相等。
 *
 * */

#include <stdio.h>

void Temperatures(double);

int main(void)
{
    double d_tem_hs;
    printf("输入华氏温度：");
    while (scanf("%lf", &d_tem_hs) == 1)
    {
        Temperatures(d_tem_hs);
        printf("输入华氏温度：");
    }
    puts("Done");

    return 0;
}

void Temperatures(double d)
{
    double d_tem_ss, d_tem_ks;
    const double d_num1 = 5.0/9.0;
    const double d_num2 = 32.0;
    const double d_num3 = 273.16;

    d_tem_ss = d_num1 * (d - d_num2);
    d_tem_ks = d + d_num3;
    printf("摄氏温度: %.2lf.\n", d_tem_ss);
    printf("开氏温度: %.2lf.\n", d_tem_ks);
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  输入华氏温度：300
 *  摄氏温度: 148.89.
 *  开氏温度: 573.16.
 *  输入华氏温度：0
 *  摄氏温度: -17.78.
 *  开氏温度: 273.16.
 *  输入华氏温度：a
 *  Done
 *
 *------------------------------------------------------
 *
  */
