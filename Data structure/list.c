#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "stdlib.h"
#include "stdbool.h"

typedef struct Node
{
    int data;           // 数据域
    struct Node *pNext; // 指针域
} NODE, *PNODE;         // NODE 等价于 struct Node, PNODE 等价于 struct NODE *

PNODE create_list(void);
void traverse_list(PNODE);
bool is_empty(PNODE);
int length_list(PNODE);
bool insert_list(PNODE, int, int);
bool delete_list(PNODE, int, int *);
void sort_list(PNODE);

int main(void)
{
    PNODE pHead = NULL;    // 等价于 struct Node * pHead = NULL;
    pHead = create_list(); // 创建一个非循环单链表
    traverse_list(pHead);
    // printf("%d, %d\n", is_empty(pHead), length_list(pHead));
    // sort_list(pHead);
    // traverse_list(pHead);
    //insert_list(pHead, 4, 33);
    //traverse_list(pHead);

    int val;
    delete_list(pHead, 4, &val);
    traverse_list(pHead);
    return 0;
}

PNODE create_list(void)
{
    int len, val;

    PNODE pHead = (PNODE)malloc(sizeof(NODE)); // 分配了一个不存放有效数据的头节点
    if (NULL == pHead)
    {
        printf("分配失败，程序中止！\n");
        exit(-1);
    }
    PNODE pTail = pHead;
    pTail->pNext = NULL;

    printf("请输入您需要生成的链表节点个数：");
    scanf("%d", &len);

    for (int i = 0; i < len; ++i)
    {
        printf("请输入第%d个节点的值：", i + 1);
        scanf("%d", &val);

        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        if (NULL == pNew)
        {
            printf("分配失败，程序中止！\n");
            exit(-1);
        }
        pNew->data = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }

    return pHead;
}

void traverse_list(PNODE pHead)
{
    PNODE p = pHead->pNext;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->pNext;
    }
    printf("\n");
    return;
}

bool is_empty(PNODE pHead)
{
    if (NULL == pHead->pNext)
        return true;
    else
        return false;
}

int length_list(PNODE pHead)
{
    PNODE p = pHead->pNext;
    int len = 0;
    while (NULL != p)
    {
        ++len;
        p = p->pNext;
    }
    return len;
}

bool insert_list(PNODE pHead, int pos, int val)
{
    int i = 0;
    PNODE p = pHead;
    while (NULL != p && i < pos - 1)
    {
        p = p->pNext;
        ++i;
    }

    if (i > pos - 1 || NULL == p)
        return false;

    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    if (NULL == pNew)
    {
        printf("内存分配失败\n");
        exit(-1);
    }
    pNew->data = val;
    PNODE q = p->pNext;
    p->pNext = pNew;
    pNew->pNext = q;

    return true;
}

bool delete_list(PNODE pHead, int pos, int *pVal)
{
    int i = 0;
    PNODE p = pHead;
    while (NULL != p->pNext && i < pos - 1)
    {
        p = p->pNext;
        ++i;
    }

    if (i > pos - 1 || NULL == p->pNext)
        return false;

    PNODE q = p->pNext;
    *pVal = q->data;

    p->pNext = p->pNext->pNext;
    free(q);
    q = NULL;

    return true;
}

void sort_list(PNODE pHead)
{
    int i, j, t;
    PNODE p, q;

    for (i = 0, p = pHead->pNext; i < length_list(pHead) - 1; ++i, p->pNext)
    {
        for (j = i + 1, q = p->pNext; j < length_list(pHead); ++j, q = q->pNext)
        {
            if (p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
}
