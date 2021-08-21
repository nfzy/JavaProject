#include <stdio.h>

int main(void)
{
    short sDate, sWeek, sDay;
    printf("Enter Days: ");
    scanf("%hd", &sDate);
    while(sDate > 0)
    {
        sWeek = sDate / 7;
        sDay = sDate % 7;
        printf("%hd days have %hd weeks, %hd days.\n", sDate, sWeek, sDay);
        printf("Enter Days: ");
        scanf("%hd", &sDate);
    }
    printf("Bye\n");

    return 0;
}
