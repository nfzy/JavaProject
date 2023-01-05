#include <stdio.h>
#include <string.h>

typedef int A; // 为int重新多取一个名字
typedef int B; // 为int重新多取一个名字

typedef struct Student
{
    int s_id;
    char s_name[20];
    char sex;
} ST, *PST;

int main(void)
{
    struct Student st;
    struct Student *pSt = &st;

    ST st2;
    st2.s_id = 99;

    printf("%d\n", st2.s_id);

    PST PS = &st;
    PS->s_id = 999;
    strcpy(PS->s_name, "zhouan");
    printf("%d, %s\n", PS->s_id, PS->s_name);
    return 0;
}