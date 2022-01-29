/*
 *
 *	Rabnud 博士加入了一个社交圈。起初他有 5 个朋友。他注意到他的朋友数量以下面的方式增长。
第 1 周少了 1 个朋友，剩下的朋友数量翻倍；第 2 周少了 2 个朋友，剩下的朋友数量翻倍。一般
而言，第 N 周少了 N 个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示 Rabnud 博士每
周的朋友数量。该程序一直运行，直到超过邓巴数（Dunbar’s number）。邓巴数是粗略估算一个人
在社交圈中有稳定关系的成员的最大值，该值大约是 150
 *
 * */

#include "stdio.h"

/*
 *
 *	初始值	5	8	12	18	28
 *	第N周	1	2	3	4	5
 *	剩下	8	12	18	28	46
 *
 *
 * */


int main(void)
{
	int i_sum, i_week, i_pow;
	for(i_sum = 5, i_week = 1; i_sum <= 150; ++i_week)
	{
		i_pow = i_sum - i_week;
		i_sum = i_pow * 2;
		printf("第%d周的朋友数是: %d\n", i_week, i_sum);
	}	

	return 0;
}
