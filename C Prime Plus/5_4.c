/*
 *	1 feet = 12 inch
 *	1 inch ≈ 2.54 cm
 *	1 feet ≈ 2.54 * 12 = 30.48 cm
 *
 * */

#include <stdio.h>
#define FEET 12
#define INCH 2.54

int main(void)
{
    int i_feet;
    float f_cm, f_inch;
    printf("Enter a height in centimeters: ");
    scanf("%f", &f_cm);
    while(f_cm > 0)
    {
        i_feet = f_cm / INCH / FEET;
        f_inch = f_cm / INCH - i_feet * FEET;
        printf("%.1f cm = %d feet, %.1f inches\n", f_cm, i_feet, f_inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &f_cm);
    }
    puts("Done!");
    
    return 0;
}
