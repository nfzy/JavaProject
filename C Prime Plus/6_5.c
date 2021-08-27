#include <stdio.h>

int main(void)
{
    int i,j;
    char n;
    char letter[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("请输入一个大写字母：");
    scanf("%c",&n);
    /*
    for(i=0; i <= n - 'A'; i++)
    {
        for(j = 0; j < n -'A' - i; j++)
            printf(" ");
        for(j = 0; j <= i; j++)
            printf("%c",j + 'A');
        for(j = i - 1; j >= 0; j--)
            printf("%c", j + 'A');
        printf("\n");
    }
    */
    for(i = 0; i < n - 'A' + 1; i++)
    {
        for(j = 0; j < n - 'A' - i; j++)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("%c",letter[j]);
        for(j = i - 1; j >= 0; j--)
             printf("%c", letter[j]);
        printf("\n");
    }

    return 0;
}
