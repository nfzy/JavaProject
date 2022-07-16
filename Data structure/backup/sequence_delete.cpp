#include <stdio.h>
#include <ctime>
#include <cstdlib>

#define MaxSize 10  // 定义最大长度

typedef struct
{
    int data[MaxSize];  // 用静态数组存放数据元素
    int length;
}SqList;

void InitList(SqList &L)
{
    L.length = 10;
    srand(time(0));
    for(int i = 0; i < L.length; ++i)
        L.data[i] = i + 1;
}


bool ListDelete(SqList &L, int i, int &e)
{
    if(i < 1 || i > L.length)
        return false;
    e = L.data[i-1];
    for(int j = i; j < L.length; ++j)
        L.data[j-1] = L.data[j];
    L.length--;
    return true;
}
int main(void)
{
    SqList L;
    InitList(L);
    int e;
    printf("L.length: %d\n", L.length);
    printf("Delete foward: L.data = %d\n", L.data[1]);
    ListDelete(L, 2, e);
    printf("Delete after: L.data = %d\n", L.data[1]);
    printf("e: %d\n", e);

    return 0;
}
