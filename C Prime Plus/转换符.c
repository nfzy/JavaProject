#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 97;
    printf("浮点数、十六进制数、p记数法: %a, %A\n", 0.16, 0.16);
    printf("单个字符: %c\n", 97);
    printf("有符号十进制整数: %d, %i\n", 97, 97);
    printf("浮点数,e记数法: %e, %E\n", 97., .97);
    printf("浮点数,十进制记数法: %f\n", 97.0);
    printf("根据值的不同,自动选择%f 或%e。%e格式用于指数小于-4 或者大于或等于精度时: %g, %G\n", .97, 97., 97., .97, 97.);
    printf("无符号八进制数: %o\n", 97);
    printf("无符号十进制数: %u\n", 97);
    printf("无符号十六进制数: %x, %X\n", 97, 97);
    printf("指针: %p\n",  &a);
    printf("打印百分号: %%\n");


    printf("|%-5d|\t|%+5d|\n", -60, 60);
    printf("|% d|\t|%d|\n",+60, -60);
    printf("|%#e|\t|%d|\n",+60.0, -60);

    return 0;
}
