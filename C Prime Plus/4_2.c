#include <stdio.h>
#include "string.h"

int main(void)
{
    printf("Enter your name: ");
    char name[40];
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%-*s\"\n", (int)strlen(name)+3, name);
    return 0;
}
