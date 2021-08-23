#include <stdio.h>
#define BIG 10

int main(void)
{
    int iNumb, iCount;
    printf("Enter A Number: ");
    scanf("%d", &iNumb);
    iCount = iNumb + BIG;
    while (iNumb < iCount + 1)
        printf("%-5d", iNumb++);
    puts("\nDone!");

    return 0;
}
