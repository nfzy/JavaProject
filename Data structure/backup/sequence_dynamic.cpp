#include <stdio.h>
#include <stdlib.h>

#define InitSize 10

typedef struct
{
    int *data;
    int MaxSize;
    int length;
}SqList;

void InitList(SqList &L)
{
    L.data = (int *)malloc(InitSize * sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}

void InCreaseSize(SqList &L, int len)
{
    int *p = L.data;
    L.data = (int *)malloc((L.MaxSize + len) * sizeof(int));
    for(int i = 0; i < L.length; ++i)
        L.data[i] = p[i];
    L.MaxSize = L.MaxSize + len;
    free(p);
}
int main(void)
{
    SqList L;
    InitList(L);
    InCreaseSize(L, 5);

    return 0;
}
