#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "stdlib.h"
typedef struct Node
{
    int data;           // 数据域
    struct Node *pNext; // 指针域
} NODE, *PNODE;         // NODE 等价于 struct Node, PNODE 等价于 struct NODE *

PNODE create_list(void);
void traverse_list(PNODE);
int main(void)
{
    PNODE pHead = NULL;    // 等价于 struct Node * pHead = NULL;
    pHead = create_list(); // 创建一个非循环单链表
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
