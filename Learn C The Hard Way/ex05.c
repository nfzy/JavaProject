#include <stdio.h>

int main(void)
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char inital = 'S';
    char first_name[] = "An";
    char last_name[] = "Zhou";

    printf("You are %d miles away.\n" , distance);
    printf("You have %.3f levels of power.\n" , power);
    printf("You have %.4lf awesome super powers.\n" , super_power);
    printf("I have an inital %c.\n" , inital);
    printf("I have a first name %s.\n" , first_name);
    printf("I have a last name %s.\n" , last_name);
    printf("My whole name is %s %c. %s.\n", first_name, inital, last_name);

    printf("www");
    puts("");
    puts(" ");
    puts("\ ");
    printf("aaa\n");
    printf("%d, %o, %x\n", ' ', ' ' , ' ');

    return 0;
}
