#include <stdio.h>
#include "string.h"

int main(void)
{

    printf("\"Zhou" " An\"" "\n");
    printf("|\"%20s\"|""\n", "Zhou An");
    printf("|\"%-20s\"|""\n", "Zhou An");
    printf("|\"%*s\"|""\n", (int)strlen("Zhou An")*3, "Zhou An");

    return 0;
}
