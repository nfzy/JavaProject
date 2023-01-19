#include <stdio.h>
#include <stdlib.h>

/**表可能达到的最大长度，存储空间初始分配量*/
#define MAXSIZE 20

/**表的数据类型，根据实际情况而定*/
typedef int ElemType;

typedef struct
{
    /**数组存储数据元素，最大值为MAXSIZE*/
    ElemType *data;
    /**最高次项*/
    int highPower;
} SqList;

/**构造一个空的线性表L*/
void InitList(SqList *L)
{
    /**申请连续的MAXSIZE长度空间*/
    L->data = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);
    /**判断空间是否申请成功*/
    if (!L->data)
        exit(-1);
    for (int i = 0; i < MAXSIZE; i++)
        L->data[i] = 0;
    /**空表最高次项为0*/
    L->highPower = 0;
}

/**销毁线性表L*/
void DestroyList(SqList *L)
{
    /**释放data指向的空间*/
    free(L->data);
    L->data = NULL;
    L->highPower = 0;
}

/**创建多项式：由用户输入多项式的每项系数与指数*/
void CreatePolynomial(SqList *L)
{
    int coefficient, exponent;

    /**循环输入常数项的每一项*/
    for (int i = 0; i < 10; i++)
    {
        printf("\n请输入第%d项的常数项和指数项，结束请输入-1 -1：", i + 1);
        scanf("%d%d", &coefficient, &exponent);
        /**指数为-1则结束输入*/
        if (exponent != -1)
        {
            /**数组下标为指数项，常数项存入下标对应的位置，若有相同指数项则常数项相加*/
            L->data[exponent] += coefficient;
            /**指数项最大项为多项式长度*/
            if (L->highPower < exponent)
                L->highPower = exponent;
        }
        else
            break;
    }
    printf("输入完毕\n");
}

/**输出常数项：按多项式指数大小依次输出多项式每一项*/
void PrintPolynomial(SqList L)
{
    printf("多项式为:");

    /**若常数项为0则不输出，若不为0则只输出常数项*/
    if (L.data[0] != 0)
        printf("%d", L.data[0]);

    /**若常数项为0则不输出*/
    if (L.data[1] > 0)
        printf("+%dx", L.data[1]); /**不输出指数项为1*/
    else if (L.data[1] < 0)
        printf("%dx", L.data[1]);

    /**从第二项开始输出指数项*/
    for (int i = 2; i <= L.highPower; i++)
        /**若常数项为0则不输出该项*/
        if (L.data[i] > 0)
            printf("+%dx^%d", L.data[i], i);
        else if (L.data[i] < 0)
            printf("%dx^%d", L.data[i], i);

    printf("\n");
}

/**两多项式相加*/
void TwoPolynomialAdd(SqList L1, SqList L2, SqList *L3)
{
    /**获取两多项式的最大项以确定相加后的多项式的最大项*/
    L3->highPower = L1.highPower > L2.highPower ? L1.highPower : L2.highPower;
    /**通过循环将两个多项式的同指数项的系数相加并保存到新的多项式中*/
    for (int i = 0; i <= L3->highPower; i++)
        L3->data[i] = L1.data[i] + L2.data[i];
}

/**两多项式相减*/
void TwoPolynomialSub(SqList L1, SqList L2, SqList *L3)
{
    /**获取两多项式的最大项以确定相加后的多项式的最大项*/
    L3->highPower = L1.highPower > L2.highPower ? L1.highPower : L2.highPower;
    /**通过循环将两个多项式的同指数项的系数相减并保存到新的多项式中*/
    for (int i = 0; i <= L3->highPower; i++)
        L3->data[i] = L1.data[i] - L2.data[i];
}

/**两多项式相乘*/
void TwoPolynomialMul(SqList L1, SqList L2, SqList *L3)
{
    /**两多项式的最高项相加为新多项式的最高项*/
    L3->highPower = L1.highPower + L2.highPower;
    for (int i = 0; i <= L1.highPower; i++)
        /**通过双层循环将两个多项式的每一项两两相乘与并保存到新的多项式中*/
        for (int j = 0; j <= L2.highPower; j++)
            /**相乘后的指数项为两项指数项相加*/
            L3->data[i + j] += L1.data[i] * L2.data[j];
}

int Menu()
{
    int a;
    printf("输入1创建两个多项式\t\t输入2输出两个多项式\n");
    printf("输入3将两个多项式相加 \t\t输入4将两个多项式相减\n");
    printf("输入5将两个多项式相乘 \t\t输入0退出\n");
    printf("请输入：");
    scanf("%d", &a);
    return a;
}

int main()
{
    SqList L1, L2, L3;
    InitList(&L1);
    InitList(&L2);
    InitList(&L3);

    while (1)
    {
        switch (Menu())
        {
        case 1:
            printf("\n请输入多项式 1 ：");
            CreatePolynomial(&L1);
            printf("\n多项式 1 为：\n");
            PrintPolynomial(L1);
            printf("\n请输入多项式 2 ：");
            CreatePolynomial(&L2);
            printf("\n多项式 2 为：\n");
            PrintPolynomial(L2);
            break;
        case 2:
            printf("\n多项式 1 为：\n");
            PrintPolynomial(L1);
            printf("\n多项式 2 为：\n");
            PrintPolynomial(L2);
            break;
        case 3:
            InitList(&L3);
            TwoPolynomialAdd(L1, L2, &L3);
            printf("两多项式相加后的结果");
            PrintPolynomial(L3);
            break;
        case 4:
            TwoPolynomialSub(L1, L2, &L3);
            printf("两多项式相减后的结果");
            PrintPolynomial(L3);
            break;
        case 5:
            DestroyList(&L3);
            InitList(&L3);
            TwoPolynomialMul(L1, L2, &L3);
            printf("两多项式相乘后的结果");
            PrintPolynomial(L3);
            break;
        case 0:
            exit(0);
        default:
            printf("暂无此功能\n");
        }
    }
}