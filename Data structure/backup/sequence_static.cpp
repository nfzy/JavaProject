#include <stdio.h>

#define MaxSize 10

typedef struct
{
    int data[MaxSize];
    int length;
}SqList;

void InitList(SqList &L)
{
    L.length = 0;
}
int main(void)
{
    SqList L;
    InitList(L);

    return 0;
}
