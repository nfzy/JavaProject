/*
 *	
 *	Chuckie Lucky 赢得了 100 万美元（税后），他把奖金存入年利率8%的账户。在每年的最后一天， Chuckie 取出 10 万美元。编写一个程序，计算多少年后 Chuckie 会取完账户的钱？
 *
 * */

#include <stdio.h>

int main(void)
{
	double d_money = 100;
	int i;

	for(i = 0; d_money > 0; ++i)
	{
		d_money += d_money * 0.8;
		//	printf("%lf\t", d_money);
		d_money -= 10;
		//	printf("%lf\n", d_money);
	}

	printf("%lf, %d\n", d_money, i);

	return 0;
}
