#include <stdio.h>

int main(void)
{
    int m, n;
    int num = 6;

    for (m = 0; m < num; m++)
    {
        char ch = 'F';
        for (n = 0; n <= m; n++,ch--)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}
