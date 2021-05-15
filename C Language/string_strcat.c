#include "stdio.h"
#include <string.h>
int main(void)

{
    char str1[] = "Original String";
    char str2[] = "New String";

    strcat(str1, str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}
