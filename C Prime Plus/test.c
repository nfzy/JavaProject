/*
#include <stdio.h>
#define a {
#define b }
int main(void)
a

    #include <string.h>
    #define Q "His Hamlet was funny without being vulgar."
    printf("He sold the painting for $%2.2f.\n", 2.345e2);      // 234.50
    printf("%c, %c, %c\n", 'H', 105, '\41');                    // H, i, !
    printf("%s\nhas %lu characters.\n", Q, strlen(Q));          // His..., 42
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);    // 1.20e3, 1201.00

    float cost = 12.99;
    float percent = 80.0;
    #define BOOK "War and Peace"

    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK, cost);
    printf("That is %.1f%% of list.\n", percent);

    printf("|%d|, |%-4X|, |%-10.3f|, |%-12.2e|, |%-30s|", 666, 138 ,232.346000, 233e0000, "hello World");
    putchar('\n');
    printf("|%15lu|, |%#4x|, |%-12.2E|, |%+10.3f|, |%8.8s|", 666LU, 11, 233E0000, 232.346, "womenzaizheli1213");
    putchar('\n');
    printf("|%6.4i|, |%*o|, |%2c|, |%+.2f|, |%-7.5s|", 6, 4, 30, 97, 2., "womenzaizheli1213");
    putchar('\n');

    int i;
    float f, E;
    char *str;
    scanf("%d", &i);
    printf("%d\n", i);
    scanf("%f%E", &f, &E);
    printf("%.2f, %.2E\n", f, E);
    scanf("%s", str);
    printf("%s\n", str);
    scanf("%s %d", str, &i);
    printf("%s %d\n", str, i);
    scanf("%*s %d", &i);
    printf("%s %d\n",str ,i);

    #define  A 4.5
    short c = 5;
    printf("The double type is %zu bytes..\n", sizeof c);
    printf("The double type is %zu bytes..\n", sizeof 0.3f);
    printf("The double type is %zu bytes..\n", sizeof 0.f);
    printf("The double type is %zd bytes..\n", sizeof A);
    //printf("The double type is %zf bytes..\n", sizeof A);
    
    unsigned char ch = -128;
    printf("%d\n" , ch);

    return 0;
}
*/


/*
#include <stdio.h>
#define S_TO_M 60
#define TEN 103
int main(void)
{
    char c1, c2;
    int diff;
    float num;
    c1 = 'S';		// c1 = 83
    c2 = 'O';		// c2 = 79
    diff = c1 - c2;	// diff = 83 - 79
    num = diff;		// num = 4
    printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);	// SOS:4 4.00
    
    int n = 96;
    while (n++ < TEN)
        printf("%5c", n);
    printf("\n");

    int x = 0;
    while (++x < 3)
        printf("%4d", x);

    x = 100;
    while (x++ < 103)
        printf("%4d\n",x);
    printf("%4d\n",x);

    char ch = 's';
    while (ch < 'w')
    {
        printf("%c", ch);
        ch++;
    }
    printf("%c\n",ch);


    #define MESG "COMPUTER BYTES DOG"
    int n = 0;
    // 无结束条件会一直打印MESG字符串
    while ( n < 5 )
        printf("%s\n", MESG);
    n++;
    printf("That's all.\n");


    int a, b, c, d, x = 0;
    while(x < 10) x++;	// 将变量x的值增加10
    a = x;
    x++;	// 或者++x; x= x + 1;	将变量x的值增加1
    b = x;
    c = (a + b) * 2;	// 将a与b之和的两倍赋给c
    d = a + b * 2;		// 将a与b的两倍之和赋给c
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    int Temperatures(double fahrenheit);
    double input;
    printf("This program convert fahrenheit to celsius and kelvin.\n");
    printf("Enter a fahrenheit to start:");
    while(scanf("%lf", &input)==1)
    {
        Temperatures(input);
        printf("Enter next fahrenheit!(q to quit):");
    }
    printf("Done!\n");

    return 0;

}
int Temperatures(double fahrenheit)
{
    const double F_TO_C=32.0;
    const double C_TO_K=273.16;
    double celsius,kelvin;
    celsius=5.0/9.0*(fahrenheit-F_TO_C);
    kelvin=celsius+C_TO_K;
    printf("%.2f.fahrenheit,equal %.2f celsius,and %.2f kelvin\n",fahrenheit,celsius,kelvin);

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int i_num, i_hour, i_min;
    const int MIN = 60;
    printf("Enter any number: ");
    scanf("%d", &i_num);
    while(i_num > 0)
    {
        i_hour = i_num / MIN;
        i_min = i_num - i_hour * MIN;
        printf("It's %d hour, %d minute.\n", i_hour, i_min);
        printf("Enter any number again: ");
        scanf("%d", &i_num);
    }
    puts("Done!");

    return 0;
}
*/

/*
#include "stdio.h"
#define TEN 10

int main(void)
{
    int i_num, i_count;
    printf("Enter a number: ");
    scanf("%d", &i_num);
    i_count = TEN + i_num;
    while(i_num <= i_count)
        printf("%-3d", i_num++);
    puts("\nDone!");

    return 0;
}
*/



/*
#include <stdio.h>
#define WEEK 7

int main(void)
{
    int i_date, i_weeks, i_days;
    printf("Enter days: ");
    scanf("%d", &i_date);
    while(i_date > 0)
    {
        i_weeks = i_date / WEEK;
        i_days = i_date % WEEK;
        printf("%d days are %d weeks, %d days.%c", i_date, i_weeks, i_days, '\n');
        printf("Enter days: ");
        scanf("%d", &i_date);
    }
    puts("Done!");

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{

    for (double value = 36.0; value > 0.0; value /= 2.0)
        printf("%8.3f", value);

    return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
    int i, j, list[10];
    for(i = 0; i < 10; i++)
    {
        list[i] = 2 * i + 3;
        for(j = 0; j <= i; j++)
            printf(" %d", list[j]);
        printf("\n");
    }

    return 0;
}*/



/*
#include "stdio.h"
#define FOUR 4
#define EIGHT 8

int main(void)
{
    int i, j;
    for(i = 0; i < FOUR; ++i)
    {
        for(j = 0; j < EIGHT; ++j)
            printf("$");
        putchar('\n');
    }
    puts("Done!");

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
	int i = 0;
	while (++i < 4)
		printf("Hi! ");
	do
        printf("Bye! ");
	while (i++ < 8);

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
	int i;
	char ch;
	for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
		printf("%c", ch);

    return 0;
}
*/

//#include <stdio.h>

//int main(void)
//{
 //   char ch;
    /*
    scanf("%c", &ch);
    while (ch != 'g')
    {
        printf("%c", ch);
        scanf("%c", &ch);
    }
    */

    /*
    scanf("%c", &ch);
    while (ch != 'g')
    {
        printf("%c", ++ch);
        scanf("%c", &ch);
    }
    */

    /*
    do {
        scanf("%c", &ch);printf("%c", ch);
    }while (ch != 'g');
    */

    /*
    scanf("%c", &ch);
    for (ch = '!'; ch != 'g'; scanf("%c", &ch))
        printf("%c", ch);
        */

    //  return 0;
//}



/*
#include <stdio.h>

int main(void)
{
	int n, m;
	n = 30;
	while (++n <= 33)
		printf("%d|", n);

    n = 30;
	do
		printf("%d|", n);
	while (++n <= 33);

    printf("\n***\n");
	for (n = 1; n*n < 200; n += 4)
		printf("%d\n", n);
	printf("\n***\n");

    for (n = 2, m = 6; n < m; n *= 2, m += 2)
		printf("%d %d\n", n, m);
	printf("\n***\n");

    for (n = 5; n > 0; n--)
	{
		for (m = 0; m <= n; m++)
			printf("=");
		printf("\n");
	}

   return 0;
}
*/


/*
#include <stdio.h>
#define SIZE 8

int main(void)
{
	int by_twos[SIZE];
	int index;

    for (index = 0; index < SIZE; index++)	// index = 0; index < SIZE
		by_twos[index] = 2 * index;

    for (index = 0; index < SIZE; index++)	// index = 0; index < SIZE
		printf("%d ", by_twos[index]);				// by_twos[index]
	printf("\n");

    return 0;
}
*/


/*
#include <stdio.h>

int main(void)
{
    int k;
    for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
    printf("k is %d in the loop\n", k);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int a, b;
    a = 5;
    b = 2;        // 2 5
    b = a;        // 5 5
    a = b;        // 5 5

    printf("%d %d\n", b, a);

    return 0;
}
*/

/*
#include "stdio.h"

int main(void)
{
    printf("%lu, %lu, %lu\n", sizeof 0x5.b6p12, sizeof 5.6, sizeof 0.0f);

    return 0;
}
*/

/*

#include <stdio.h>

int main(void)
{
    char ch = 'C';
    printf("转义序列：%c.\n", ch);
    printf("十进制值：%d.\n", ch);
    printf("八进制值：%o.\n", ch);
    printf("十六进制值：%#x.\n", ch);

    return 0;
}
*/

/*
#include "stdio.h"
#define BOOK "War and Peace"

int main(void)
{
	float cost =12.99;
	float percent = 80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
    printf("That is %.f%% of list.\n", percent);

    return 0;
}
*/

/*
#include <stdio.h>
#define a_x {
#define b_x }
int main(void)
{
    char catch[40];
    int a;
    scanf("%*s%d", &a);
    printf("%s, %d\n", catch, a);

    return 0;
}
*/

/*
#include <stdio.h>
#include "string.h"

int main(void)
{
    char first_name[20];
    char last_name[20];
    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Your name is %s, %s\n", first_name, last_name);
    printf("%*s", (int)strlen(first_name), first_name);

    return 0;
}*/



#include <stdio.h>

int main(void)
{
    float f_num;
    printf("Enter a float number:         \b\b\b\b\b\b\b\b");
    scanf("%f", &f_num);
    printf("%f, %a\n", f_num, f_num);

    return 0;
}
