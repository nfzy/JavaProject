/*
 *
 *	编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入储存在 char 类型的 数组中，假设每行字符不超过 255。回忆一下，根据%c 转换说明，scanf()函数一次只能从输入中 读取一个字符，而且在用户按下 Enter 键时 scanf()函数会生成一个换行字符（\n）。
 *
 * */

#include <stdio.h>

#define NUM 255

int main(void)

{
	char str[NUM];
	int i = -1;

	do
		scanf("%c", &str[++i]);
	while(str[i] != '\n');

	for(; i >= 0; --i)
		printf("%c", str[i]);
	

	return 0;
}

