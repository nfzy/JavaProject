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
