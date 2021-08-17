#include <stdio.h>
#define SQUARES 100
int main(void)
{
    const double CROP = 2E16; // 世界小麦年产谷粒数
    double current, total;
    int count = 1;
    printf("square\t\tgrains\t\ttotat\t\t");
    printf("fraction of \n");
    printf("\t\tadded\t\tgrains\t\t");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d\t   %13.2e    %12.2e    %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d\t   %13.2e    %12.2e    %12.2e\n", count, current, total, total / CROP);
    }
    printf("That's all.\n");
    return 0;
}
