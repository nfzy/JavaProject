/*
 *
 *	日期:	Wed 26 Jan 2022 04:19:01 AM EST
 *
 *	目标:	编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格 的上下限。
 *
 *
 * */

#include<stdio.h>
int main()
{
	int i_start, i_end;
	printf("Enter the star tnum: ");
	scanf("%i",&i_start);
	printf("Enter the end num: ");
	scanf("%i",&i_end);

	for(;i_start <= i_end; ++i_start)
		printf("%+-8d, %+-8d, %+-8d\n", i_start, i_start * i_start, i_start * i_start * i_start);

    return 0;
}
