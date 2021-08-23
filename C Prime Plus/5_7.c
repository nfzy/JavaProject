
/*#include <stdio.h>

double number(double);
int main(void)
{
    printf("Enter a double number: ");
    double d_num;
    scanf("%lf", &d_num);
    printf("The number is: %lf.\n", number(d_num));

    return 0;
}

double number(double d)
{
    return d * d * d;
}
*/


#include <stdio.h>

double cube(double);

int main(void)
{
    double d_num;
    printf("Enter a number: ");
    while(scanf("%lf", &d_num) == 1)
    {
        printf("The number's cube is %.1lf.\n", cube(d_num));
        printf("Enter a number(input char will exit): ");
    }
    puts("Done!");

    return 0;
}

double cube(double d_num)
{
    return d_num * d_num * d_num;
}
