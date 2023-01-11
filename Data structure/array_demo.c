#include <stdio.h>
#include "malloc.h"
#include "stdbool.h"
#include "stdlib.h"

struct Arr
{
    int *pBase;
    int len;
    int cnt;
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
    int val;
    struct Arr arr;
    init_arr(&arr, 5);
    append_arr(&arr, 5);
    append_arr(&arr, -335);
    append_arr(&arr, 203);
    append_arr(&arr, -10);
    insert_arr(&arr, 3, 6);
    show_arr(&arr);
    delete_arr(&arr, 3, &val);
    show_arr(&arr);
    sort_arr(&arr);
    show_arr(&arr);
    printf("是否为空：%d\n", is_empty(&arr));
    printf("是否为满：%d\n", is_full(&arr));

    return 0;
}

void init_arr(struct Arr *pArr, int length)
{
    pArr->pBase = (int *)malloc(sizeof(int) * length);
    if (pArr->pBase == NULL)
    {
        printf("内存分配失败\n");
        exit(-1);
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
    if (pArr->cnt == 0)
        return true;
    else
        return false;
}

bool is_full(struct Arr *pArr)
{
    if (pArr->cnt == pArr->len)
        return true;
    else
        return false;
}
bool insert_arr(struct Arr *pArr, int pos, int val)
{
    if (is_full(pArr))
        return false;
    if (pos < 1 || pos > pArr->cnt + 1)
        return false;

    for (int i = pArr->cnt - 1; i >= pos - 1; --i)
        pArr->pBase[i + 1] = pArr->pBase[i];
    pArr->pBase[pos - 1] = val;
    pArr->cnt++;
    return true;
}

bool append_arr(struct Arr *pArr, int val)
{
    if (is_full(pArr))
    {
        printf("长度已满，不能添加\n");
        return false;
    }

    pArr->pBase[pArr->cnt++] = val;
    return true;
}

bool show_arr(struct Arr *pArr)
{
    for (int i = 0; i < pArr->cnt; ++i)
        printf("%d\t", pArr->pBase[i]);
    putchar('\n');
}

bool delete_arr(struct Arr *pArr, int pos, int *val)
{
    if (is_empty(pArr))
        return false;
    if (pos > pArr->cnt || pos < 1)
        return false;
    *val = pArr->pBase[pos - 1];
    for (int i = pos - 1; i < pArr->cnt; ++i)
        pArr->pBase[i] = pArr->pBase[i + 1];
    pArr->cnt--;
    return true;
}

void sort_arr(struct Arr *pArr)
{
    int temp;

    // 从前往后
    // for (int i = 0; i < pArr->cnt; i++)
    // {
    //     for (int j = i + 1; j < pArr->cnt; ++j)
    //         if (pArr->pBase[i] > pArr->pBase[j])
    //         {
    //             temp = pArr->pBase[i];
    //             pArr->pBase[i] = pArr->pBase[j];
    //             pArr->pBase[j] = temp;
    //         }
    // }

    // 从后往前
    for (int i = pArr->cnt - 1; i >= 0; --i)
    {
        for (int j = i - 1; j >= 0; --j)
            if (pArr->pBase[i] < pArr->pBase[j])
            {
                temp = pArr->pBase[i];
                pArr->pBase[i] = pArr->pBase[j];
                pArr->pBase[j] = temp;
            }
    }
}