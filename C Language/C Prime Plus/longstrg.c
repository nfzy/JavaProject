#include <stdio.h>

int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");
    printf("Here's the newest way to print a " "long string.\n"); /* ANSI C */


    printf("Hello young lovers, wherever you are.");
    putchar('\n');
    printf("Hello young" " lovers" ", " "wherever you are.");
    putchar('\n');
    printf("Hello young lovers"
    ", wherever you are.");
    putchar('\n');
    return 0;
}
