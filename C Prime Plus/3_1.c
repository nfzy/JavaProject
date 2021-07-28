#include <stdio.h>

int main(void)
{
    char c;
    short s = (short)32770;
    int i;
    long l;

    printf("char: %lu, short: %lu, int: %lu, long: %lu.\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));

    printf("%hd\n", s);
    printf("%hd\n", s);
}
