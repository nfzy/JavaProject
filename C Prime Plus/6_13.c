/*
 *
 *	日期:	Thu 27 Jan 2022 01:56:36 AM UTC
 *
 *	目标:	编写一个程序，创建一个包含 8 个元素的 int 类型数组，分别把数组元素设置为 2 的前 8 次幂。 使用 for 循环设置数组元素的值，使用 do while 循环显示数组元素的值。
 *
 * */

#include <stdio.h>

#define NUM 8

int main(void)
{
	int a[NUM], i, val = 2;
	for(i = 0; i < NUM; ++i)
	{
		a[i] = val;
		val *= 2;
	}

	i = 0;
	do
		printf("%5d", a[i]);
	while(i++ < NUM);
	putchar('\n');
	return 0;
}
