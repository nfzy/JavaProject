#include <stdio.h>

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    int n3 = 2000000000;
    int n4 = 1234567890;

    printf("%.le, %.le, %.le, %.le\n" , n1, n2, n3, n4);
    printf("%ld, %ld\n" , n3, n4);
    printf("%d, %d, %d, %d\n" , n1, n2, n3, n4);

    printf("%zd, %zd, %zd, %zd\n", sizeof(float), sizeof(double), sizeof(long int), sizeof(int));

    return 0;
}
