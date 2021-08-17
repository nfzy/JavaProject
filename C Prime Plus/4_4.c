#include <stdio.h>

int main(void)
{
    char name[40];
    float cm;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height: ");
    scanf("%f", &cm);
    printf("%s, you are %.2f meter height\n" , name, cm/100);

    return 0;
}
