/*
 *	日期:	Sun 23 Jan 2022 08:01:54 AM EST
 *
 *	目的:	使用嵌套循环，按下面的格式打印字母： 
 *			A
 *			BC
 *			DEF 
 *			GHIJ
 *			KLMNO
 *			PQRSTU
 *
 * */

#include <stdio.h>

int main(void)
{
	int i_colums, i_rows;
	char ch = 'A';
	for(i_rows = 0; i_rows < 6; ++i_rows)
	{
		for(i_colums = 0; i_colums <= i_rows; ++i_colums)
			printf("%c", ch++);
		putchar('\n');

	}

	return 0;
}
