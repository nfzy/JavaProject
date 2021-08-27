#include <stdio.h>

int main(void)
{
    int i_num, j_num;
    for (i_num = 0; i_num < 5; ++i_num)
    {
        for (j_num = 0; j_num <= i_num; ++j_num)
            printf("$");
        putchar('\n');
    }

    return 0;
}
