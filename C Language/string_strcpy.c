#include "stdio.h"
#include <string.h>
int main(void)

{
    char str[] = "Hello World!";

    char str1[] = "Original String";
    char str2[] = "New String";
    char str3[20];

    char str4[] = "To be or not to be!";
    char str5[40];
    printf("sizeof str = %lu, strlen str = %lu.\n", sizeof(str), strlen(str));

    strcpy(str2, str1);
    strcpy(str3, "Copy Successful!");

    strncat(str5, str4, 10);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    printf("str5: %s\n", str5);
    return 0;
}
