#include <math.h>
#include <stdio.h>

int main(void) {
    int a = 1, b = -5, c = 6;
    float delta, x_1, x_2;

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x_1 = (-b + sqrt(delta)) / 2 / a;
        x_2 = (-b - sqrt(delta)) / 2 / a;
        printf("x_1 = %.2f, x_2 = %.2f\n", x_1, x_2);
    } else if (delta == 0) {
        x_2 = (-b - sqrt(delta)) / 2 / a;
        x_1 = x_2;
        printf("唯一解: x_1 = x_2 = %.2f\n", x_1);
    } else
        printf("无解\n");

    int i;
    printf("%d, %c\n", i, i);
}
