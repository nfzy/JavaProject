#include <stdio.h>

int main(void)
{
    printf("Enter number one: ");
    float fNum1, fNum2;
    scanf("%f", &fNum1);
    printf("The input is %.1f or %.1e\n", fNum1, fNum1);

    printf("Enter number two: ");
    scanf("%f", &fNum2);
    printf("The input is %+.3f or %.3E\n", fNum2, fNum2);

    return 0;
}
