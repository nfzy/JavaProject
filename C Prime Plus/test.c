#include <stdio.h>
#define _ {
#define b }
int main(void)
_
    /*
    #include <string.h>
    #define Q "His Hamlet was funny without being vulgar."
    printf("He sold the painting for $%2.2f.\n", 2.345e2);      // 234.50
    printf("%c, %c, %c\n", 'H', 105, '\41');                    // H, i, !
    printf("%s\nhas %lu characters.\n", Q, strlen(Q));          // His..., 42
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);    // 1.20e3, 1201.00
    */

    /*
    float cost = 12.99;
    float percent = 80.0;
    #define BOOK "War and Peace"

    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK, cost);
    printf("That is %.1f%% of list.\n", percent);
    */

    printf("|%d|, |%-4X|, |%-10.3f|, |%-12.2e|, |%-30s|", 666, 138 ,232.346000, 233e0000, "hello World");
    putchar('\n');
    printf("|%15lu|, |%#4x|, |%-12.2E|, |%+10.3f|, |%8.8s|", 666LU, 11, 233E0000, 232.346, "womenzaizheli1213");
    putchar('\n');
    printf("|%6.4i|, |%*o|, |%2c|, |%+.2f|, |%-7.5s|", 6, 4, 30, 97, 2., "womenzaizheli1213");
    putchar('\n');

    int i;
    float f, E;
    char *str;
    scanf("%d", &i);
    printf("%d\n", i);

    scanf("%5f%E", &f, &E);
    printf("%f, %E\n", f, E);

    scanf("%s", str);
    printf("%s\n", str);

    scanf("%s %d", str, &i);
    printf("%s %d\n", str, i);

    scanf("%*s %d", &i);
    printf("%s %d\n",str ,i);

    return 0;
b
