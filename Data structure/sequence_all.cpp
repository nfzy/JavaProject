#include <stdio.h>
#include <malloc.h>

#define InitSize 10    // 默认最大长度

// 定义结构体类型
typedef struct
{
    int *data;  // 可变长度的数组
    int MaxSize;    // 顺序表最大容量
    int length; // 顺序表当前长度
}SqList;

// 初始化结构体
void InitList(SqList &L)
{
    L.data = (int *)malloc(InitSize * sizeof(int)); // 申请一片连续的存储空间
    L.length = 0;
    for(int i = 0; i < InitSize; ++i)
    {
        L.data[i] = i+1;
        ++L.length;
    }
    L.MaxSize = InitSize;
}

// 动态增加数组长度
void IncreaseList(SqList &L, int length)
{
    int *p = L.data;
    L.data = (int *)malloc((L.MaxSize + length) * sizeof(int));
    for(int i = 0; i < L.length; ++i)
        L.data[i] = p[i];
    L.MaxSize += length;
    free(p);
}

//  增加一个元素
bool ListInsert(SqList &L, int i, int e)
{
        if(i < 1 || i > L.length + 1)
            return false;
        if(L.length >= L.MaxSize)
            return false;
        for(int j = L.length; j >= i; --j)
            L.data[j] = L.data[j-1];
        L.length++;
        L.data[i-1] = e;
        return true;
}


// 打印输出数组内容
void ShowList(SqList &L)
{
    for(int i = 0; i < L.length; ++i)
        printf("L.data[%d]: %d\n", i, L.data[i]);
    return;
}

int main(void)
{
    SqList L;
    InitList(L);
    //ShowList(L);
    IncreaseList(L, 5);
    //ShowList(L);
    ListInsert(L, 3, 456);
    ShowList(L);
    printf("MaxSize = %d, Length = %d\n", L.MaxSize, L.length);
    return 0;
}
