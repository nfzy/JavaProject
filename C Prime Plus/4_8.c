#include <stdio.h>

int main(void)
{
    float fMileAge, fGallon;
    printf("Enter the travel way: ");
    scanf("%f", &fMileAge);
    printf("Enter the travel use: ");
    scanf("%f", &fGallon);
    printf("每加仑汽油行驶的英里数: %.2f\n", fMileAge/fGallon);

    #define GALLON 3.785
    #define MILE 1.609
    printf("%.1f\n", GALLON/1.609*100);

    return 0;
}
