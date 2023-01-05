/*
 *	日期:	Sun Jan 23 19:04:50 CST 2022
 *
 *	目标:	创建一个包含26个元素的数组，并在其中储存26个小写字母。然后打印数组的所有内容。
 *
 * */

#include <stdio.h>

#define LETTER 26

int main(void)
{	
	char chars[LETTER];
	int i_count;
	for(i_count = 0; i_count < LETTER; ++i_count)
		chars[i_count] = 'a' + i_count;

	for(i_count = 0; i_count < LETTER; ++i_count)
		printf("%c|", *(chars + i_count));

	putchar('\n');

    return 0;
}


/*
 *
 *	gcc (Debian 10.2.1-6) 10.2.1 20210110
 *	
 *	a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z|
 *
 *
 * */
