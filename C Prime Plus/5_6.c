#include <stdio.h>

int main(void)
{
    int i_count, i_sum, i_day;
    i_count = i_sum = 0;

    printf("Enter days for you: ");
    scanf("%d", &i_day);
    while (i_day > 0)
    {
        while(i_count++ < i_day)
            i_sum += i_count * i_count;
        printf("sum = %d\n", i_sum);
        i_count = i_sum = 0;
        printf("Enter day for you: ");
        scanf("%d", &i_day);
    }
    puts("bye");

    return 0;
}
