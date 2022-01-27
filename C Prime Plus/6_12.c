/*
 *
 *	日期:	Wed 26 Jan 2022 02:07:41 PM UTC
 *
 *	目标:	考虑下面两个无限序列：
 *			1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... 
 *			1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
			编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1 相乘得-1，偶数个 -1 相乘得 1。让用户交互地输入指定的次数，当用户输入 0 或负值时结束输入。查看运行 100 项、 1000 项、10000 项后的总和，是否发现每个序列都收敛于某值？
 *
 *
 * */

#include <stdio.h>

int main(void)
{	
	int a;
	int i;
	printf("please input a: ");
	while(scanf("%d", &a) && a > 0)
	{
		double sum1 = 0, sum2 = 0;
		for(i = 1; i <= a; i++){
			sum1 += 1.0 / i;
			if(i % 2 == 0){
				sum2 += 1.0 / i;
			}
			else{
				sum2 -= 1.0 / i;
			}
		}
		printf("%lf,%lf\n", sum1, sum2);
		printf("please input again: ");
	}

	return 0;

}
