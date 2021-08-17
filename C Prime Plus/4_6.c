#include <stdio.h>
#include "string.h"

int main(void)
{
    char first_name[20];
    char last_name[20];
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("Enter last name: ");
    scanf("%s", last_name);
    printf("%s %s\n%*lu %*lu\n", first_name, last_name, (int)strlen(first_name), strlen(first_name), (int)strlen(last_name), strlen(last_name));
    // printf("%s %s\n%zd %zd\n", first_name, last_name, strlen(first_name), strlen(last_name));
    printf("%s %s\n%-*lu %-*lu\n", first_name, last_name, (int)strlen(first_name), strlen(first_name), (int)strlen(last_name), strlen(last_name));

    return 0;
}
