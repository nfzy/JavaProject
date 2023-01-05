#include <stdio.h>

int main(void)
{
    int i_count, i_sum, i_money;
    i_count = i_sum = 0;

    printf("Enter money for you: ");
    scanf("%d", &i_money);
    while(i_count++ < i_money)
        i_sum += i_count;
    printf("sum = %d\n", i_sum);

    return 0;
}
