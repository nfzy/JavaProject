#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node
{
    int data;   // 数据域
    struct Node *pNext; // 指针域
}NODE, *PNODE;

PNODE create_list(void);
void print_list(PNODE);
bool is_empty(PNODE);
int length_list(PNODE);
bool insert_list(PNODE, int, int);
bool delete_list(PNODE, int, int *);
void sort_list(PNODE);

int main(void)
{
    PNODE pHead;
    pHead = create_list();

    print_list(pHead);

    return 0;
}

PNODE create_list(void)
{
    int len;    // 用来存放节点的有效个数
    int val;    // 用来临时存放用户输入的数据
    
    PNODE pHead = (PNODE)malloc(sizeof(NODE));  // 生成头节点
    if(NULL == pHead)
    {
        printf("内存分配失败\n");
        exit(-1);
    }
    PNODE pTail = pHead;
    pTail->pNext = NULL;

    printf("请输入需要的个数：");
    scanf("%d", &len);

    for(int i = 0; i < len; ++i)
    {
        printf("请输入第%d个节点的值：", i+1);
        scanf("%d", &val);

        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        if(NULL == pHead)
        {
            printf("内存分配失败\n");
            exit(-1);
        }
        pNew->data = val;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail = pNew;
    }

    return pHead;
}

void print_list(PNODE pHead)
{
    PNODE p = pHead -> pNext;
    while(p != NULL)
    {
        printf("%d\n", p -> data);
        p = p -> pNext;
    }
    putchar('\n');

    return;
}
