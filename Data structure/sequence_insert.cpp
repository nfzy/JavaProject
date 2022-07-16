#include <stdio.h>

#define MaxSize 10  // 定义最大长度

typedef struct
{
    int data[MaxSize];  // 用静态数组存放数据元素
    int length;         //顺序表当前长度
}SqList;    // 顺序表的类型定义

void InitList(SqList &L)
{
    L.length = 0;
}

bool ListInsert(SqList &L, int i, int e)
{
    if(i < 1 || i > L.length+1)
        return false;
    if(L.length >=  MaxSize)
        return false;
    for(int j = L.length; j >= i; --j)  // 将第i个元素及之后的元素后移
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;    // 在位置i上放e
    L.length++;     // 长度+1
    return true;
}

int main(void)
{
    SqList L;   // 声明一个顺序表
    L.length++;
    InitList(L);    // 初始化顺序表
    printf("L.length: %d\n", L.length);
    printf("ListInsert: %d\n", ListInsert(L, 6, 555));
    printf("L.data: %d\n", L.data[5]);

    return 0;
}
