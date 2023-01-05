/*
 *
 * Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。Deirdre 以 5%的复合利息投资了 100 美元（也就是说，利息是当前余额的 5%，包含之前的利息）。编写 一个程序，计算需要多少年 Deirdre 的投资额才会超过 Daphne，并显示那时两人的投资额
 *
 *
 * */


#include <stdio.h>

int main(void)
{
	int i_year;
	float f_de, f_da;
	f_de = f_da = 100;

	for(i_year = 1; f_de <= f_da; ++i_year)
	{
		f_de += f_de  * 0.05;
		f_da += 10;
	}
	printf("%lf, %lf, %d\n", f_da, f_de, i_year);

	return 0;
}
