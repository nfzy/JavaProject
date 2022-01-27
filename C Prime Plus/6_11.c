/*
 *	
 *	日期:	Wed 26 Jan 2022 01:51:18 PM UTC
 *
 *	目标:	编写一个程序，在数组中读入 8 个整数，然后按倒序打印这 8 个整数
 *
 *
 * */

#include <stdio.h>

int main(void)
{
	int i_array[8], i_count;
	for(i_count = 0; i_count < 8; ++i_count)
	{
		printf("Enter num: ");
		scanf("%d", &i_array[i_count]);
	}


	for(i_count = 7; i_count >= 0; --i_count)
		printf("%d ", i_array[i_count]);

	putchar('\n');

	return 0;
}
