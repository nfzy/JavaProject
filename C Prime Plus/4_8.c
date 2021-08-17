#include <stdio.h>

int main(void)
{
    float fMileAge, fGallon;
    printf("Enter the travel way: ");
    scanf("%f", &fMileAge);
    printf("Enter the travel use: ");
    scanf("%f", &fGallon);
    printf("每加仑汽油行驶的英里数: %.2f\n", fMileAge/fGallon);

    #define USA 1.609/3.758
    printf("%.1f\n",fGallon*3.758/(1.609*fMileAge)/100);
    printf("%.1f\n",USA*fMileAge/fGallon);
    return 0;
}
