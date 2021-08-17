#include <stdio.h>

int main(void)
{
    printf("Enter the speed(Mb/s): ");
    float fSpeed, fSize;
    scanf("%f", &fSpeed);
    printf("Enter the speed(Mb/s): ");
    scanf("%f", &fSize);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",fSpeed ,fSize , fSize/fSpeed*8);

    return 0;
}
