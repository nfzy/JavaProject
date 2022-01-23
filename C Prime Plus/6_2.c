/*
 *	日期:	Sun 23 Jan 2022 06:58:59 AM EST
 *
 *	目的:	使用嵌套循环，按下面的格式打印字符
 *				$
 *				$$
 *				$$$ 
 *				$$$$ 
 *				$$$$$
 *
 * */

#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j <= i; ++j)
			printf("$");

		putchar('\n');
	}

	return 0;
}
