#include <stdio.h>

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
