#include <stdio.h>

int main(void)
{
    float f_height, f_height_inches;
    int f_feet;
    printf("Enter a height in centimeters: ");
    scanf("%f", &f_height);
    while(f_height>0)
    {
        f_feet = f_height / 30.48f;
        f_height_inches = f_height / 2.54f - f_feet * 12;
        printf("%.1f cm= %d feet, %.1f inches\n", f_height, f_feet, f_height_inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &f_height);
    }
    printf("Bye\n");

    return 0;
}
