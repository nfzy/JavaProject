#include <stdio.h>

#define PRAISE "You are good\n"
#define  aaa PRAISE

int main(void)
{
    char name[3];
    scanf("%s" ,name);
    printf("Hello, %s, %s, %d\n" ,PRAISE ,name, name[2]);
    printf("%zd", sizeof(name));
    printf("%lu", sizeof(name));
    printf("%lu\n", sizeof(char)); //printf("%lu\n", sizeof(char)); error，对于数据类型来说只能写括号，特定量可写成sizeof name
    printf("%lu", sizeof PRAISE);
    printf("\n%s" , aaa);
#define  aaa "PRAISE"
    printf("\n%s" , aaa);

    return 0;
}
