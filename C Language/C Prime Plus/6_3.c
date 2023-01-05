/*
 *	
 *	日期:	Sun 23 Jan 2022 07:11:33 AM EST
 *	
 *	目的:	使用嵌套循环，按下面的格式打印字母： 
 *				F
 *				FE
 *				FED 
 *				FEDC
 *				FEDCB
 *				FEDCBA
 *
 *
 * */

#include <stdio.h>

int main(void)
{
	for(int i = 0; i < 'Z' - 'A' + 1; ++i)
	{
		for(int j = 0; j <= i; ++j)
			printf("%c", 'Z' - j);

		putchar('\n');
	}

    return 0;
}


/*
 *	gcc (Debian 10.2.1-6) 10.2.1 20210110
 *	
 *	Z
 *	ZY
 *	ZYX
 *	ZYXW
 *	ZYXWV
 *	ZYXWVU
 *	ZYXWVUT
 *	ZYXWVUTS
 *	ZYXWVUTSR
 *	ZYXWVUTSRQ
 *	ZYXWVUTSRQP
 *	ZYXWVUTSRQPO
 *	ZYXWVUTSRQPON
 *	ZYXWVUTSRQPONM
 *	ZYXWVUTSRQPONML
 *	ZYXWVUTSRQPONMLK
 *	ZYXWVUTSRQPONMLKJ
 *	ZYXWVUTSRQPONMLKJI
 *	ZYXWVUTSRQPONMLKJIH
 *	ZYXWVUTSRQPONMLKJIHG
 *	ZYXWVUTSRQPONMLKJIHGF
 *	ZYXWVUTSRQPONMLKJIHGFE
 *	ZYXWVUTSRQPONMLKJIHGFED
 *	ZYXWVUTSRQPONMLKJIHGFEDC
 *	ZYXWVUTSRQPONMLKJIHGFEDCB
 *	ZYXWVUTSRQPONMLKJIHGFEDCBA
 *
 * */
