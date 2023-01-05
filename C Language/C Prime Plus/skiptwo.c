#include <stdio.h>

#define PI 3.1415
int main(void)
{
    int n;
    printf("Please enter three integers: ");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);


    return 0;
}
