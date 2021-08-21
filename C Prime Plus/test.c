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





#include <stdio.h>
#define S_TO_M 60
#define TEN 103
int main(void)
{
    /*
    char c1, c2;
    int diff;
    float num;
    c1 = 'S';		// c1 = 83
    c2 = 'O';		// c2 = 79
    diff = c1 - c2;	// diff = 83 - 79
    num = diff;		// num = 4
    printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);	// SOS:4 4.00
    */

    /*
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
    */


    /*
    #define MESG "COMPUTER BYTES DOG"
    int n = 0;
    // 无结束条件会一直打印MESG字符串
    while ( n < 5 )
        printf("%s\n", MESG);
    n++;
    printf("That's all.\n");
    */


    /*
    int a, b, c, d, x = 0;
    while(x < 10) x++;	// 将变量x的值增加10
    a = x;
    x++;	// 或者++x; x= x + 1;	将变量x的值增加1
    b = x;
    c = (a + b) * 2;	// 将a与b之和的两倍赋给c
    d = a + b * 2;		// 将a与b的两倍之和赋给c
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    */

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
