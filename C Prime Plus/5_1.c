#include <stdio.h>
#define MIN 60

int main(void)
{
    int iNum, iHour;

    while (1)
    {
        printf("Enter A Number Of Minutes: ");
        scanf("%i", &iNum);
        if(iNum <= 0)
            break;
        iHour = iNum / MIN;
        printf("The time is%2d hours %2d mintues.\n", iHour, iNum - iHour * MIN);
    }

    return 0;
}
