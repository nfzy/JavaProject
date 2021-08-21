#include <stdio.h>

void pound();
int main(void)
{
    float fl = 5.95f;
    char ch = 5;
    //pound(fl);
    pound(ch);
    return 0;
}

void pound(int n)
{
    while (n-- > 0) 
        printf("Hello World!\n");
}
