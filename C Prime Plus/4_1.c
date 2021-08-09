#include <stdio.h>

int main(void)
{
    char first_name[10];
    char last_name[10];
    printf("Enter last name: ");
    scanf("%s", last_name);
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("%s , %s\n" ,last_name , first_name);

    return 0;
}
