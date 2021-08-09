#include <stdio.h>
#include "string.h"
#define Q "\"His Hamlet was funny without being vulgar.\""

int main(void)
{
    printf("He sold the painting for $%2.2f.\n", 2.345e2); // 234.50
    printf("%c%c%c\n", 'H', 105, '\41'); // HI,
    printf("%s\nhas %lu characters.\n", Q, strlen(Q));// 42
    printf("Is %.3e the same as %2.2f?\n", 1201.0, 1201.0); // 1201.00e2, 1201.00

    return 0;
}
