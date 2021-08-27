#include <stdio.h>
#include "string.h"

int main(void)
{
    char array[40];
    printf("Enter string: ");
    scanf("%s", array);
    for(int i = strlen(array); i >= 0; --i)
        printf("%c", array[i]);
    putchar('\n');
    for(int i = 0; i < strlen(array); ++i)
        printf("%c", array[i]);
    putchar('\n');

    return 0;
}
