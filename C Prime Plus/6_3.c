#include <stdio.h>

void array();
int main(void)
{
    int i_num, j_num;
    for (i_num = 0; i_num < 6; ++i_num)
    {
        for (j_num = 0; j_num <= i_num; ++j_num)
            printf("%c", 'F' - j_num);
        putchar('\n');
    }
    array();

    return 0;
}


void array()
{
    char ch[] = "ABCDEF";
    for (int i = 6; i > 0; --i)
    {
        for (int j = 5; j >= i - 1; --j)
            printf("%c", ch[j]);
        putchar('\n');
    }
}
