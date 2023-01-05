/*
 *
 *	日期:	Wed 26 Jan 2022 04:42:02 AM EST
 *
 *	目标:	编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数 字之前，程序应循环处理用户输入的每对值。
 * 
 *
 * */

#include "stdio.h"

int main(void)
{
	float f_num1, f_num2;
	printf("Enter float num(a b) ");
	char ch_status = scanf("%f %f", &f_num1, &f_num2);
	while(ch_status == 2)
	{
		printf("两数之差: %f\n", f_num1 - f_num2);
		printf("两数乘积: %f\n", f_num1 * f_num2);

		printf("Enter float num(a b) ");
	 	ch_status = scanf("%f %f", &f_num1, &f_num2);
	}

	printf("Done!\n");

	return 0;
}
