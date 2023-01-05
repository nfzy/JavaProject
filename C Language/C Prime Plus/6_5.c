/*
 *	日期:	Sun 23 Jan 2022 08:03:39 AM EST
 *
 *	目的:	编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母： 
 *			    A
 *			   ABA
 *			  ABCBA
 *			 ABCDCBA 
 *			ABCDEDCBA
 *
 * */

#include <stdio.h>

int main(void)
{

	char ch, i, j;
	printf("请输入金字塔高度字符:");
	scanf("%c", &ch);
	for(i = 'A'; i <= ch; i++)
	{
		for(j = 0; j <= ch - i; j++)
			printf(" ");
		for(j = 'A'; j <= i; j++)
			printf("%c", j);
		for(j = i - 1; j >= 'A'; j--)
			printf("%c", j);
		printf("\n");
	}

    return 0;
}
