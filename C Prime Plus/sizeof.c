#include <stdio.h>

int main(void)
{
    printf("Size of char is %lu.\n", sizeof(char));
    printf("Size of short int is %lu.\n", sizeof(short));
    printf("Size of int is %lu.\n", sizeof(int));
    printf("Size of long int is %lu.\n", sizeof(long));
    printf("Size of unsigned short is %lu.\n", sizeof(unsigned short));
    printf("Size of unsigned int is %lu.\n", sizeof(unsigned int));
    printf("Size of unsigned long is %lu.\n", sizeof(unsigned long));
    printf("Size of unsigned long long is %lu.\n", sizeof(unsigned long long));
    printf("Size of long long is %lu.\n", sizeof(long long));
    printf("Size of long double is %lu.\n", sizeof(long double));
    printf("Size of float is %lu.\n", sizeof(float));
    printf("Size of double is %lu.\n", sizeof(double));

    return 0;
}
