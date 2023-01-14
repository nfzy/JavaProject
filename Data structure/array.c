#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h" // 包含了exit函数
#include "malloc.h" // 包含了malloc函数

struct Arr
{
    int *pBase; // 存储的是数组第一个元素的地址
    int len;    // 数组所能容纳的最大元素的个数
    int cnt;    // 当前数组有效元素的个数
};

void init_arr(struct Arr *pArr, int length);

bool append_arr(struct Arr *pArr, int val);
bool insert_arr(struct Arr *pArr, int pos, int val);
bool delete_arr(struct Arr *pArr, int pos, int *pVal);
bool is_empty(struct Arr *pArr);
bool is_full(struct Arr *pArr);
bool show_arr(struct Arr *pArr);
bool inversion_arr(struct Arr *pArr);
void sort_arr(struct Arr *pArr);
int get(struct Arr *pArr, int val);

int main(void)
{
    struct Arr arr;
    init_arr(&arr, 6);
    show_arr(&arr);
    // printf("len = %d\n", arr.len);
    append_arr(&arr, 1);
    append_arr(&arr, 22);
    append_arr(&arr, 3);
    append_arr(&arr, 44);
    append_arr(&arr, 999);
    insert_arr(&arr, 6, -5);
    show_arr(&arr);
    inversion_arr(&arr);
    show_arr(&arr);
    sort_arr(&arr);
    show_arr(&arr);
    printf("%d", get(&arr, 10));

    return 0;
}

void init_arr(struct Arr *pArr, int length)
{
    pArr->pBase = (int *)malloc(sizeof(int) * length);

    if (NULL == pArr->pBase)
    {
        printf("动态内存分配失败\n");
        exit(-1); // 中止整个程序
    }
    else
    {
        pArr->len = length;
        (*pArr).cnt = 0;
    }
    return;
}

bool is_empty(struct Arr *pArr)
{
    if (0 == pArr->cnt)
        return true;
    else
        return false;
}
bool is_full(struct Arr *pArr)
{
    if (pArr->cnt == (*pArr).len)
        return true;
    else
        return false;
}

bool show_arr(struct Arr *pArr)
{
    if (is_empty(pArr))
        printf("数组为空!\n");
    else
    {
        for (int i = 0; i < pArr->cnt; ++i)
            printf("%d\t", pArr->pBase[i]);
        printf("\n");
    }
}

bool append_arr(struct Arr *pArr, int val)
{
    // 满时返回false
    if (is_full(pArr))
    {
        printf("添加失败，长度已满\n");
        return false;
    }
    // 不满时追加
    pArr->pBase[pArr->cnt] = val;
    pArr->cnt++;
    return true;
}

bool insert_arr(struct Arr *pArr, int pos, int val)
{
    if (is_full(pArr))
        return false;
    if (pos < 1 || pos > pArr->cnt + 1)
        return false;

    for (int i = pArr->cnt - 1; i >= pos - 1; --i)
    {
        pArr->pBase[i + 1] = pArr->pBase[i];
    }
    pArr->pBase[pos - 1] = val;
    pArr->cnt++;
    return true;
}

bool delete_arr(struct Arr *pArr, int pos, int *pVal)
{
    if (is_empty(pArr))
        return false;
    if (pos < 1 || pos > pArr->cnt)
        return false;

    *pVal = pArr->pBase[pos - 1];
    for (int i = pos; i < pArr->cnt; ++i)
    {
        pArr->pBase[i - 1] = pArr->pBase[i];
    }
    pArr->cnt--;
    return true;
}

bool inversion_arr(struct Arr *pArr)
{
    int i = 0;
    int j = pArr->cnt - 1;
    int t;

    while (i < j)
    {
        t = pArr->pBase[i];
        pArr->pBase[i] = pArr->pBase[j];
        pArr->pBase[j] = t;
        ++i;
        --j;
    }
    return true;
}

void sort_arr(struct Arr *pArr)
{
    int temp;
    for (int i = 0; i < pArr->cnt; ++i)
        for (int j = i + 1; j < pArr->cnt; ++j)
            if (pArr->pBase[i] > pArr->pBase[j])
            {
                temp = pArr->pBase[i];
                pArr->pBase[i] = pArr->pBase[j];
                pArr->pBase[j] = temp;
            }
}

int get(struct Arr *pArr, int val)
{
    for (int i = 0; i < (*pArr).cnt; ++i)
    {
        if ((*pArr).pBase[i] == val)
            return i + 1;
        else
            return 0;
    }

    return true;
}
