/*
 *
 *	日期:	Wed 26 Jan 2022 11:30:33 AM UTC
 *
 *	目标:	编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数 的平方和，并显示计算结果。然后程序继续提示用户输入上限和下限整数，并显示结果，直到用 户输入的上限整数等于或小于下限整数为止。程序的运行示例如下：
 *
 *
 * */


#include <stdio.h>

int main(void)
{
	int i_top, i_bottom, i_sign, sum;
	printf("请输入整数(a b): ");
	char status = scanf("%i %d", &i_bottom, &i_top);
	while(status == 2 && i_top > i_bottom)
	{
		sum = 0;
		for(i_sign = i_bottom; i_sign <= i_top; ++i_sign)
			sum += i_sign * i_sign;
		printf("The sums of the squares from %d to %i is %d\n", i_bottom * i_bottom, i_top * i_top, sum);
		printf("请输入整数(a b): ");
		status = scanf("%i %d", &i_bottom, &i_top);
	}

	printf("Done!\n");


	return 0;
}
