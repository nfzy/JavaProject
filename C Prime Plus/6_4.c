#include <stdio.h>

int main(void)
{
    int i_num, j_num;
    char ch = 'A';
    for (i_num = 0; i_num < 6; ++i_num)
    {
        for (j_num = 0; j_num <= i_num; ++j_num)
            printf("%c", ch++);
        putchar('\n');
    }

    return 0;
}
