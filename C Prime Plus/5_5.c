/*
#include <stdio.h>

void change()
{
    int i_sum, i_count, i_num; 
    i_count = i_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &i_num);
    while(i_num > 0)
    {
        while(i_count++ < i_num)
            i_sum += i_count;
        printf("The number's sum is %d.\n", i_sum);
        printf("Enter a number: ");
        scanf("%d", &i_num);
        i_count = i_sum = 0;
    }
    puts("Done!");
}

int main(void)
{
    int i_count, i_sum, i_money;
    i_count = i_sum = 0;

    printf("Enter money for you: ");
    scanf("%d", &i_money);
    while (i_money > 0)
    {
        while(i_count++ < i_money)
            i_sum += i_count;
        printf("sum = %d\n", i_sum);
        printf("Enter money for you: ");
        scanf("%d", &i_money);
        i_count = i_sum = 0;
    }
    puts("bye");
    change();

    return 0;
}

*/



// addemup.c
#include <stdio.h>

void change();

int main(void)
{
    change();

    return 0;
}

void change()
{
    int i_sum, i_count, i_num;
    i_sum = i_count = 0;
    printf("Enter a number: ");
    scanf("%d", &i_num);
    while(i_num > 0)
    {
        while(i_count++ < i_num)
            i_sum += i_count;
        printf("The number's sum is %d.\n", i_sum);
        i_sum = i_count = 0;
        printf("Enter a number: ");
        scanf("%d", &i_num);
    }
    puts("Done!");
}
