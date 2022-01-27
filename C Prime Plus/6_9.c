/*
 *
 *	日期:	Wed 26 Jan 2022 06:16:37 AM EST
 *
 *	目标:	修改练习 8，使用一个函数返回计算的结果
 * 
 *
 * */

#include "stdio.h"

float return_num(float, float);

int main(void)
{
	float f_num1, f_num2;
	
	printf("Enter float num(a b) ");
	printf("%f\n", return_num(f_num1, f_num2));

	return 0;
}

float return_num(float f_num1, float f_num2)
{
	char ch_status = scanf("%f %f", &f_num1, &f_num2);
	while(ch_status == 2)
	{
		return (f_num1 - f_num2) / (f_num1 * f_num2);
	 	ch_status = scanf("%f %f", &f_num1, &f_num2);
	}
}

