#include <stdio.h>

int main(void)
{
    const int i_NUM = 26;
    int i_count;
    char ch[i_NUM];
    for (i_count = 0; i_count < i_NUM; ++i_count) {
        ch[i_count] = 'a' + i_count;
    }

    for (i_count = 0; i_count < i_NUM; ++i_count) {
        printf("%c", ch[i_count]);
    }
    putchar('\n');

    return 0;
}
