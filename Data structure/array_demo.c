#include <stdio.h>
#include "malloc.h"
#include "stdbool.h"
#include "stdlib.h"

typedef struct Arr
{
    int *pBase;
    int len;
    int cnt;
} *PARR;

void init_arr(PARR, int);
bool append_arr(PARR, int);
bool is_full(PARR);

int main(void)
{
    int val;
    struct Arr arr;
    PARR pArr = &arr;

    init_arr(pArr, 3);
    pArr->pBase[0] = 66;
    printf("%d", pArr->pBase[0]);
    return 0;
}

void init_arr(PARR pArr, int length)
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

bool is_full(PARR pArr)
{
    if (pArr->cnt == pArr->len)
        return true;
    else
        return false;
}

bool append_arr(PARR pArr, int val)
{
    if (is_full(pArr))
    {
        printf("长度已满，不能添加\n");
        return false;
    }

    pArr->pBase[pArr->cnt++] = val;
    return true;
}