#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32;
    me32 = 45933945;

    printf("First, assume int32_t is int: me32 = %d.\n" , me32);
    /*
     * 1. 参数PRId32被定义在inttypes.h中的"d"替换。
     * 2. C语言中可以把多个连续的字符串组合成一个字符串。
     *
     * */
    printf("Instead, use a \"macro\" from inttypes.h: me32 = % "PRId32".\n" , me32);
    return 0;
}
