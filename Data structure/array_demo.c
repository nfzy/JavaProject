#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"     
/* 包含了exit函数 */
#include "malloc.h"     
/* 包含了malloc函数 */
typedef struct Arr 
{
	int	*pBase;
	/* 存储的是数组第一个元素的地址 */
	int	len;
	/* 数组所能容纳的最大元素的个数 */
	int	cnt;
	/* 当前数组有效元素的个数 */
}ARR, *PARR;

// 初始化
void init_arr( PARR, int );
// 在尾部追加
bool append_arr( PARR, int );
// 按照索引添加
bool insert_arr( PARR, int, int );
// 按照索引删除
bool delete_arr( PARR, int, int * );

// 判断空还是满
bool is_empty( PARR );
bool is_full( PARR );

// 打印
bool show_arr( PARR );

// 转换位置
bool inversion_arr( PARR );
// 排序
void sort_arr( PARR );
// 获取索引
int get( PARR, int );

int main( void ) 
{
    ARR arr;
    PARR pArr = &arr;
    init_arr(pArr, 5);
    append_arr(pArr, 5);
    append_arr(pArr, 4);
    append_arr(pArr, 3);
    append_arr(pArr, 2);

    show_arr(pArr);

    insert_arr(pArr, 2, -99);
    show_arr(pArr);

    inversion_arr(pArr);
    show_arr(pArr);

    int pVal;
    delete_arr(pArr, 2, &pVal);
    show_arr(pArr);

    sort_arr(pArr);
    show_arr(pArr);

	return(0);
}

void init_arr( PARR pArr, int length ) 
{
	pArr->pBase = (int *) malloc( sizeof(int) * length );
	if ( NULL == pArr->pBase ) 
	{
		printf( "动态内存分配失败n" );
		exit( -1 ); /* 中止整个程序 */
	}else  {
		pArr->len	= length;
		pArr->cnt	= 0;
	}
	return;
}
bool is_empty( PARR pArr)
{
	if ( 0 == pArr->cnt )
		return(true);
	else
		return(false);
}
bool is_full( PARR pArr)
{
	if ( pArr->cnt == pArr->len )
		return(true);
	else
		return(false);
}
bool show_arr( PARR pArr)
{
	if ( is_empty( pArr ) )
		printf( "数组为空\n" );
	else{
		for ( int i = 0; i < pArr->cnt; ++i )
			printf( "%d\t", pArr->pBase[i] );
		printf( "\n" );
	}
}
bool append_arr( PARR pArr, int val )
{
	/* 满时返回false */
	if ( is_full( pArr ) )
	{
		printf( "添加失败，长度已满n" );
		return(false);
	}
	/* 不满时追加 */
	pArr->pBase[pArr->cnt] = val;
	pArr->cnt++;
	return(true);
}
bool insert_arr( PARR pArr, int pos, int val )
{
	if ( is_full( pArr ) )
		return(false);
	if ( pos < 1 || pos > pArr->cnt + 1 )
		return(false);
	for ( int i = pArr->cnt - 1; i >= pos - 1; --i )
	{
		pArr->pBase[i + 1] = pArr->pBase[i];
	}
	pArr->pBase[pos - 1] = val;
	pArr->cnt++;
	return(true);
}
bool delete_arr( PARR pArr, int pos, int *pVal )
{
	if ( is_empty( pArr ) )
		return(false);
	if ( pos < 1 || pos > pArr->cnt )
		return(false);
	*pVal = pArr->pBase[pos - 1];
	for ( int i = pos; i < pArr->cnt; ++i )
	{
		pArr->pBase[i - 1] = pArr->pBase[i];
	}
	pArr->cnt--;
	return(true);
}
bool inversion_arr( PARR pArr)
{
	int	i = 0;
	int	j = pArr->cnt - 1;
	int	t;
	while ( i < j )
	{
		t = pArr->pBase[i];
		pArr->pBase[i]	= pArr->pBase[j];
		pArr->pBase[j]	= t;
		++i;
		--j;
	}
	return(true);
}
void sort_arr( PARR pArr)
{
	int temp;
	for ( int i = 0; i < pArr->cnt; ++i )
		for ( int j = i + 1; j < pArr->cnt; ++j )
			if ( pArr->pBase[i] > pArr->pBase[j] )
			{
				temp = pArr->pBase[i];
				pArr->pBase[i]	= pArr->pBase[j];
				pArr->pBase[j]	= temp;
			}
}
int get( PARR pArr, int val )
{
	for ( int i = 0; i < pArr->cnt; ++i )
	{
		if ( pArr->pBase[i] == val )
			return(i + 1);
		else
			return(0);
	}
	return(true);
}
