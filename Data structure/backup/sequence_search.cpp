#include <stdio.h>

#define MaxSize 10  // 定义最大长度

typedef struct
{
    int *data;  
    int MaxSize;
    int length;
}SqList;

void InitList(SqList &L)
{
    L.length = 10;
}


// 
int getElement(SqList &L, i)
{
    return L.data[i];
}

// 按值查找操作
int LocaleElement(SqList &L, int e)
{
    for(int i = 0; i < length; ++i)
        if(L.data[i] =e e)
            return i+1;
    return 0;
}

int main(void)
{
    SqList L;
    InitList(L);
    printf("L.length: %d\n", L.length);

    return 0;
}
