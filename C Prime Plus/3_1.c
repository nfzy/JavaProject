#include <stdio.h>
int main(void)
{
    int a = 2147483647;
    float b = 3.4E38 * 100.0f;
    float c = 0.1234567E-38 / 10;

    printf("%ld\n",sizeof(float));
    printf("%ld\n",sizeof(int));

    printf("%d %d %d\n", a, a+1, a+2); //整数上溢
    printf("%e\n", b);                 //浮点数上溢
    printf("%e\n", c);                   //浮点数下溢
    printf("%f\n", 2.0e20 + 1.0 - 2.0e20);

    return 0;
}
