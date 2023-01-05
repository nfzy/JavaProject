# Chapter 1

## 复习题

1. 对编程而言，可移植性意味着什么。

   **完美的可移植程序是,其源代码无需修改就能在不同计算机系统中成功编译的程序。**

2. 解释源代码文件，目标代码文件和可执行文件有什么区别。

   **源代码文件包含程序员使用的任何编程语言编写的代码。目标代码文件包含机器语言代码,它不必是完整的程序代码。可执行文件包含组成可执行程序的完整机器语言代码。**

3. 编程的七个主要步骤是什么。

   1. **定义程序目标;**
   2. **设计程序;**
   3. **编写程序;**
   4. **编译程序;**
   5. **运行程序;**
   6. **测试和调试程序;**
   7. **维护和修改程序;**

4. 编译器的任务是什么。

   **编译器把源代码(如用C语言编写的代码)翻译成等价的机器语言代码(也叫作目标代码)。**

5. 链接器的任务是什么。

   **链接器把编译器翻译好的源代码以及库代码和启动代码组合起来,生成一个可执行程序。**

## 编程练习

1. 你刚被`MacroMuscle`有限公司聘用。该公司准备进入欧洲市场,需要一个把英寸单位转换为厘米单位`(1 inch = 2.54 cm)`的程序。该程序要提示用户输入英寸值。你的任务是定义程序目标和设计程序(编程过程的第`1`步和第`2`步)。

   ~~~c
   #include <stdio.h>
   #define INCH 2.54
   
   int main(void)
   {
       double inch;
       
       printf("Enter a number of inch: ");
       printf("        \b\b\b\b\b\b\b\b");
       scanf("%lf", &inch);
       printf("The inch convert centermeter is: %.2lf\n", inch * INCH);
       
       return 0;
   }
   ~~~
   
   

# Chapter 2

##　复习题

1. C语言的基本模块是什么。

   **函数**

2. 什么是语法错误?写出一个英语例子和C语言例子。

   **语法错误违反了组成语句或程序的规则，一般编译或链接时能够检查错误。语法错误的英文例子：Me speak English good.、语法错误的C语言例子：`printf ("Where are the parentheses?")`**

3. 什么是语义错误(逻辑错误)?写出一个英语例子和C语言例子。

   **语义错误违反了组成语句或程序的意思，一般编译或链接时可以通过，也可以运行得到结果。语义错误的英文例子：Snow is black.、语义错误的C语言例子：`printf("%c\n", 97);`**

4. Indiana Sloth编写了下面的程序，并征求你的意见。请帮助他评定。

   ~~~c
   include studio.h	// <stdio.h>或"stdio.h"
   int main{void}		// 该程序打印一年有多少周	(void)
   (					// {																		
   int s				// ;
   s := 56;			// s = 56;
   print(There are s weeks in a year.);	// "..."
   return 0;			// }
   ~~~

5. .假设下面的4个例子都是完整程序中的一部分，它们都输出什么结果。

   ~~~c
   printf("Baa Baa Black Sheep.");
   printf("Have you any wool?\n");
   // Baa Baa Black Sheep.Have you any wool?
   
   printf("Begone!\nO creature of lard!\n");
   // Begone!
   // O creature of lard!
   
   printf("What?\nNo/nfish?\n");
   // What?
   // No/n
   // fish?
   
   int num;
   num = 2;
   printf("%d + %d = %d", num, num, num + num);
   // 2 + 2 = 4
   ~~~

6. 在`main、int、function、char、=`中，哪些是C语言的关键字。

   `int char`

7. .如何以下面的格式输出变量words和lines的值（这里3020和350代表两个变量的值）。

   ~~~c
   printf("There were %d words and %d lines.\n", 3020, 350);
   ~~~

   

8. 考虑下面的程序，请问,在执行完第7、第8、第9 行后，程序的状态分别是什么。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
   	int a, b;
   	a = 5;
   	b = 2; 	/* 第 7 行 */		// 2 5
   	b = a; 	/* 第 8 行 */		// 5 5
   	a = b;	/* 第 9 行 */		// 5 5
   
       printf("%d %d\n", b, a);
   
       return 0;
   }
   ~~~

9. 考虑下面的程序，请问,在执行完第7、第8、第9行后，程序的状态分别是什么。
   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
   	int x, y;
   	x = 10;
   	y = 5;		/* 第 7 行 */		// 10 5
   	y = x + y; 	/* 第 8 行 */		// 10 15
   	x = x * y;	/* 第 9 行 */		// 150 15
   
       printf("%d %d\n", x, y);
   
       return 0;
   }
   ~~~

## 编程练习

1. 编写一个程序,调用一次`printf()`函数，把你的名和姓打印在一行。再调用一次`printf()`函数，把你的名和姓分别打印在两行。然后,再调用两次`printf()`函数,把你的名和姓打印在一行。输出应如下所示(当然要把示例的内容换成你的名字)。

   ~~~c
   /*
    *	Zhou An		<-第1次打印的内容
    *	Zhou		<-第2次打印的内容
    *	An			<-仍是第2次打印的内容
    *	Zhou An		<-第3次和第4次打印的内容
    *
    * */
   
   #include <stdio.h>
   
   int main(void)
   {
       printf("Zhou An\n");
       printf("Zhou\nAn\n");
       printf("Zhou");
       printf(" An\n");
   
       return 0;
   }
   ~~~

   

2. 编写一个程序，打印你的姓名和地址。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
   	printf("My name is %s.\n", "An Zhou");    
   	printf("The address is %s.\n", "Chu Zhou");
       
       return 0;
   }
   ~~~

3. 编写一个程序把你的年龄转换成天数,并显示这两个值，这里不用考虑闰年的问题。

   ~~~c
   #include <stdio.h>
   #define YEAR 365
   
   int main(void)
   {
       short int age;
       printf("Ente You age number: ");
       printf("___\b\b\b");
       scanf("%hd", &age);
       if(age <= 0)
           printf("You are a theif.\n");
       else 
           printf("You are %hd years old and You have %d long days.\n" , age, age * YEAR);
   
       return 0;
   }
   ~~~

4. 编写一个程序，生成以下输出，除了 main()函数以外，该程序还要调用两个自定义函数：一个名为`jolly()`，用于打印前3条消息，调用一次打印一条，另一个函数名为`deny()`，打印最后一条消息。

   ~~~c
   /*
    *	For he's a jolly good fellow!
    *	For he's a jolly good fellow!
    *	For he's a jolly good fellow!
    *	Which nobody can deny!
    *
    * */
   
   #include <stdio.h>
   
   void jolly();
   void deny();
   int main(void)
   {
       jolly();
       deny();
   
       return 0;
   }
   
   void jolly()
   {
       for (int i = 0; i < 3; ++i) 
           printf("For he's a jolly good fellow!\n");
   	
       return;
   }
   
   void deny()
   {
       printf("Which nobody can deny!\n");
       return;
   }
   ~~~

5. 编写一个程序,生成以下输出，除了`main()`以外，该程序还要调用两个自定义函数:一个名为`br()`，调用一次打印一次“Brazil，Russia”；另一个名为`ic()`，调用一次打印一次“India，China”，其他内容在 main()函数中完成。

   ~~~c
   /*
    *
    *	Brazil, Russia, India, China
    *	India, China,
    *	Brazil, Russia
    *
    * */
   #include <stdio.h>
   
   void br();
   void ic();
   
   int main(void)
   {
       br();
       printf("%c ", ',');
       ic();
       putchar('\n');
       ic();
       printf(",\n");
       br();
       putchar('\n');
       
       return 0;
   }
   
   void br()
   {
       printf("Brazzil, Russia");
       
       return;
   }
   
   void ic()
   {
       printf("India, China");
       
       return;
   }
   ~~~

6. 编写一个程序，创建一个整型变量toes，并将toes设置为10，程序中还要计算toes的两倍和toes的平方，该程序应打印3个值，并分别描述以示区分。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       int toes = 10;
       
       printf("toes = %hu\n", toes);
       printf("toes + toes = %d\n", toes * 2);
       printf("toes x toes = %d\n", toes * toes);
   
       return 0;
   }
   ~~~

7. 许多研究表明，微笑益处多多。编写一个程序,生成以下格式的输出，该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。

   ~~~c
   /*
    *	Smile!Smile!Smile!
    *	Smile!Smile!
    *	Smile!
    *
    * */
   
   #include <stdio.h>
   
   void smile(int);
   
   int main(void)
   {
       smile(3);
       putchar('\n');
       smile(2);
       putchar('\n');
       smile(1);
       putchar('\n');
       
       return 0;
   }
   
   void smile(int count)
   {
       for (int i = 0; i<count; ++i)
           printf("Smile!");
   }
   ~~~

8. 在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名为`one_three()`的函数。该函数在一行打印单词“one”,再调用第2个函数`two()`,然后在另一行打印单词“three”。`two()`函数在一行显示单词“two”。main()函数在调用 one_three()函数前要打印短语“starting now:”，并在调用完毕后显示短语“done!”。因此，该程序的输出应如下所示。

   ~~~c
   /*
    *	starting now:
    *	one
    *	two
    *	three
    *	done!
    *
    * */
   
   #include <stdio.h>
   
   void two(void);
   void one_three(void);
   
   int main(void)
   {
       printf("Starting now:\n");
       one_three();
       printf("Done!\n");
       return 0;
   }
   
   void one_three(void)
   {
       printf("One\n");
       two();	// 注意不能在函数里嵌套定义函数，只能嵌套调用：void two();
       printf("Three\n");
   }
   
   void two(void)
   {
       printf("Two\n");
   }
   ~~~

# Chapter 3

## 复习题

1. 指出下面各种数据使用的合适数据类型(有些可使用多种数据类型)。

   * East Simpleton 的人口:	`unsigned int、unsigned short `
   * DVD 影碟的价格:	`float、double`
   * 本章出现次数最多的字母:`unsigned char、unsigned short int `
   * 本章出现次数最多的字母次数:  `unsigned char ` 

2. 在什么情况下要用`long`类型的变量代替`int`类型的变量。

   * **在系统之要表示的数超过`int`范围。**
   * **如果要处理更大的值，使用在所有系统上都保证至少是32位的类型，可提高程序可移植性。**

3. 使用哪些可移植的数据类型可以获得32位有符号整数?选择的理由是什么。

   **如果要正好获得32位的整数，可以使用`int32_t`类型。要获得可储存至少32位整数的最小类型，可以使用`int_least32_t`类型。如果要为`32`位整数提供最快的计算速度，可以选择`int_fast32_t`类型(假设你的系统已定义了上述类型)。**

4. 指出下列常量的类型和含义(如果有的话)。

   ~~~c
   signed char		// '\b'
   signed int		// 1066
   signed double	// 99.44
   unsigned int	// 0XAA(255)
   signed double	// 2.0e30
   ~~~

5. Dottie Cawm 编写了一个程序,请找出程序中的错误。
   ```c
   include <stdio.h>	// #include <stdio.h>
   main				// int main(void)
   (					// {
   float g; h;			// float g, h;
   float tax, rate;
       
   g = e21;			// 1e21
   tax = rate * g;
   )					// }
   ```

6. 写出下列常量在声明中使用的数据类型和在`printf()`中对应的转换说明。

   |    常量     |          类型           | 转换说明（`%`转换字符） |
   | :---------: | :---------------------: | :---------------------: |
   |    `12`     |          `int`          |          `%d`           |
   |    `0X3`    |     `unsigned int`      |          `%#X`          |
   |    `'C'`    | `char`（实际上是`int`） |          `%c`           |
   |  `2.34E07`  |        `double`         |          `%E`           |
   |  `'\040'`   | `char`（实际上是`int`） |          `%c`           |
   |    `7.0`    |        `double`         |          `%lf`          |
   |    `6L`     |       `long int`        |          `%ld`          |
   |   `6.0f`    |         `float`         |          `%f`           |
   | `0x5.b6p12` |        `double`         |          `%a`           |

7. 写出下列常量在声明中使用的数据类型和在`printf()`中对应的转换说明(假设`int`为16位)。

   |   常量    |          类型           | 转换说明（`%`转换字符） |
   | :-------: | :---------------------: | :---------------------: |
   |   `012`   |     `unsigned int`      |          `%o`           |
   | `2.9e05L` |      `long double`      |          `%Le`          |
   |   `'s'`   | `char`（实际上是`int`） |          `%c`           |
   | `100000`  |       `long int`        |          `%ld`          |
   |  `'\n'`   | `char`（实际上是`int`） |          `%c`           |
   |  `20.0f`  |         `float`         |          `%f`           |
   |  `0x44`   |     `unsigned int`      |          `%#x`          |
   |   `-40`   |          `int`          |          `%d`           |

8. 假设程序的开头有下列声明。把下面`printf()`语句中的转换字符补充完整。

   ~~~c
   int imate = 2;
   long shot = 53456;
   char grade = 'A';
   float log = 2.71828;
   
   printf("The odds against the %d were %ld to 1.\n", imate, shot);
   printf("A score of %f is not an %c grade.\n", log, grade);
   ~~~

9. 假设`ch`是`char`类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给`ch`（假设使用`ASCII`编码值）。

   ~~~c
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
   ~~~

10. 修正下面的程序（在C中，`/`表示除以）。

    ~~~c
    // #include <stdio.h>
    
    void main(int)		// int main(void)	/* this program is perfect */
    {
    	cows, legs integer;		// int cows, legs, integer;
    	printf("How many cow legs did you count?\n);
    	scanf("%c", legs);		//%d &legs
    	cows = legs / 4;	
    	printf("That implies there are %f cows.\n", cows)	// %d
    }
    ~~~

11. .指出下列转义序列的含义。

    * `\n`：回车换行
    * `\\`：单引号
    * `\"`：爽引号
    * `\t`：制表符

## 编程练习

1. 通过试验(即编写带有此类问题的程序)观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       char c;
       short s = (short)32770;
       int i;
       long l;
   
       printf("char: %lu, short: %lu, int: %lu, long: %lu.\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));
       printf("%hd\n", s);
       printf("%hd\n", s);
   
       return 0;
   }
   ~~~

   

2. 编写一个程序，要求提示输入一个`ASCII`码值(如$66$),然后打印输入的字符。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       int i_ascii;
       printf("Enter a ascii number: ");
       scanf("%d", &i_ascii);
       printf("The ascii %d is %c.\n", i_ascii, i_ascii);
   
       return 0;
   }
   ~~~

3. 编写一个程序，发出一声警报,然后打印下面的文本。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       printf("\aStartled by the sudden sound, Sally shouted,\n");
       printf("\"By the Great Pumpkin, what was that!\"\n");
   
       return 0;
   }
   ~~~

4. 编写一个程序，读取一个浮点数,先打印成小数点形式,再打印成指数形式。然后,如果系统支持，再打印成$p$记数法(即十六进制记数法)。按以下格式输出(实际显示的指数位数因系统而异)。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       double f_num;
       printf("Enter a float value:          \b\b\b\b\b\b\b\b\b");
       scanf("%lf", &f_num);
       printf("fixed-point notation: %lf\n", f_num);
       printf("exponential notation: %e\n" , f_num);
       printf("p notation: %a\n" , f_num);
       
       return 0;
   }
   ~~~

5. 一年大约有$3.156*107$秒。编写一个程序，提示用户输入年龄,然后显示该年龄对应的秒数。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       printf("Enter your ages: ");
       short ages;
       scanf("%hu", &ages);
       printf("You have %.3e seconds for use.\n", ages * 3.156e+7);
   
       return 0;
   }
   ~~~

   

6. $1$个水分子的质量约为$3.0*10^{−23}$克。$1$夸脱水大约是$950$克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       printf("Please enter a quart of water: ");
       float quart_num;
       printf("______\b\b\b\b\b\b");
       scanf("%f" , &quart_num);
       printf("There are %.3f grams\n" , 950*quart_num);
       printf("The number of water molecules is: %lf\n" , 950*quart_num/3.0e-2);
   
       return 0;
   }
   ~~~

7. $1$英寸相当于$2.54$厘米。编写一个程序，提示用户输入身高(/英寸)，然后以厘米为单位显示身高。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       float inch;
       printf("Enter your height: ");
       printf("___\b\b\b");
       scanf("%f", &inch);
       printf("CenterMeter is: %.2f\n", inch*2.54f);
   
       return 0;
   }
   ~~~

8. 在美国的体积测量系统中，$1$品脱等于$2$杯，$1$杯等于$8$盎司，$1$盎司等于$2$大汤勺，$1$大汤勺等于$3$茶勺。编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用浮点类型比整数类型更合适?

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       float cups;
       printf("How many cups of tea would you like: ");
       printf("___\b\b\b");
       scanf("%f", &cups);
       printf("Pints: %.2f , ounces: %.f, tablespoons: %.f, teaspoons: %.f\n", cups/2, cups*8, cups*8*2, cups*8*2*3);
   
       return 0;
   }
   ~~~

# Chapter 4

## 复习题

1. 再次运行程序清单$4.1$，但是在要求输入名时，请输入名和姓(根据英文书写习惯，名和姓中间有一个空格)，看看会发生什么情况?为什么?

   **遇到空格会跳过，后面接收的数据会发生错误。**

2.  假设下列示例都是完整程序中的一部分，它们打印的结果分别是什么。

   ~~~c
   printf("He sold the painting for $%2.2f.\n", 2.345e2);	// 234.50
   
   printf("%c%c%c\n", 'H', 105, '\41');	// Hi!
   
   #define Q "His Hamlet was funny without being vulgar."
   	printf("%s\nhas %d characters.\n", Q, strlen(Q));	
   // His Hamlet was funny without being vulgar.
   // has 42 characters.
   
   printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);	// 1.20e3 12.01
   ~~~

3. 在第$2$题的c中,要输出包含双引号的字符串$Q$，应如何修改?

   ~~~c
   #define Q "\"His Hamlet was funny without being vulgar.\""
   ~~~

4. 找出下面程序中的错误。

   ~~~c
   define B booboo		// "..."
   define X 10
   
   main(int)			// int main(void)
   {
   	int age;
   	char name;
   	printf("Please enter your first name.");
   	scanf("%s", name);	// &name
   	printf("All right, %c, what's your age?\n", name);	// %s
   	scanf("%f", age);	// %d
   	xp = age + X;		// int xp = age + x;
   	printf("That's a %s! You must be at least %d.\n", B, xp);
   
       rerun 0;
   }
   ~~~

5. 假设一个程序的开头是这样。请构造一个使用$BOOK、cost$和$percent$的`printf()`语句，打印以下内容。

   ~~~c
   #define BOOK "War and Peace"
   
   int main(void)
   {
   	float cost =12.99;
   	float percent = 80.0;
   	
       printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
       printf("That is %.f%% of list.\n", percent)
       
       return 0;
   ｝
   ~~~

6. 打印下列各项内容要分别使用什么转换说明。

   ~~~c
   %d		// 一个字段宽度与位数相同的十进制整数
   %4X	// 一个形如 8A、字段宽度为 4 的十六进制整数
   %10.3f	// 一个形如 232.346、字段宽度为 10 的浮点数
   %12.2e	// 一个形如 2.33e+002、字段宽度为 12 的浮点数
   %-30s	// 一个字段宽度为 30、左对齐的字符串
   ~~~

7. 打印下面各项内容要分别使用什么转换说明。

   ~~~c
   %15lu	// 字段宽度为 15 的 unsigned long 类型的整数
   %#4x	// 一个形如 0x8a、字段宽度为 4 的十六进制整数
   %-12.2E	// 一个形如 2.33E+02、字段宽度为 12、左对齐的浮点数
   %+10.3f	// 一个形如+232.346、字段宽度为 10 的浮点数
   %8.8s		// 一个字段宽度为 8 的字符串的前 8 个字符
   ~~~

8. 打印下面各项内容要分别使用什么转换说明。

   ~~~c
   %6.4d	// 一个字段宽度为6、最少有4位数字的十进制整数
   %*o		// 一个在参数列表中给定字段宽度的八进制整数
   %2c		// 一个字段宽度为2的字符
   %+.2f   // 一个形如+3.13、字段宽度等于数字中字符数的浮点数
   %-7.5s	// 一个字段宽度为7、左对齐字符串中的前5个字符
   ~~~

9. 分别写出读取下列各输入行的`scanf()`语句，并声明语句中用到变量和数组。

   ~~~c
   %d		// 101
   %f %f	// 22.32 8.34E−09
   %s		// linguini
   %s %d	// catch 22
   %*s %d	// catch 22 (但是跳过catch)
   ~~~

10. 什么是空白。

    **空白包括空格、制表符和换行符。C 语言使用空白分隔记号。`scanf()`使用空白分隔连续的输入项**

11. 下面的语句有什么问题?如何修正?

    ~~~C 
    printf("The double type is %z bytes..\n", sizeof(double));	// %z中的z是修饰符,不是转换字符,所以要在修符后面加上一个它修饰的转换字符。可以使用%zd打印十进制数,或用不同的说明符打印不同进制的数,例如,%zx打印十六进制的数。
    ~~~

12. 假设要在程序中用圆括号代替花括号，以下方法是否可行。

    ~~~c
    #define ( {
    #define ) }
    
    // 可以分别把(和)替换成{和}。但是预处理器无法区分哪些圆括号应替换成花括号,哪些圆括号不能替换成花括号。
    #include <stdio.h>
    
    int main{void}	// error;
    {
        // statement;
        return 0;
    }
    ~~~

## 编程练习

1. 编写一个程序，提示用户输入名和姓，然后以“名、姓”的格式打印出来。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       char first_name[20];
       char last_name[20];
       printf("Enter your first name: ");
       scanf("%s", first_name);
       printf("Enter your last name: ");
       scanf("%s", last_name);
   	
       printf("Your name is %s, %s\n", first_name, last_name);
   	return 0;
   }
   ~~~

2. .编写一个程序,提示用户输入名字，并执行以下操作。

   ~~~c
   printf("\"%s\"", name);	// 打印名字,包括双引号;
   printf("%20s", name);	// 在宽度为 20 的字段右端打印名字,包括双引号;
   printf("%-20s", name);	// 在宽度为 20 的字段左端打印名字,包括双引号;
   printf("%*s", (int)strlen(name), name);	// 在比姓名宽度宽 3 的字段中打印名字。
   ~~~

3. 编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。用下面的格式进行输出(系统不同，指数记数法显示的位数可能不同)。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       printf("Enter number one: ");
       float f_num1, f_num2;
       scanf("%f", &f_num1);
       printf("The input is %.1f or %.1e\n", f_num1, f_num1);
   
       printf("Enter number two: ");
       scanf("%f", &f_num2);
       printf("The input is %+.3f or %.3E\n", f_num2, f_num2);
   
       return 0;
   }
   ~~~

4. 编写一个程序，提示用户输入身高(单位:英寸)和姓名，然后以下面的格式显示用户刚输入的信息。使用 float 类型,并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高,并以米为单位显示出来。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       char name[40];
       float f_cm;
       printf("Enter your name: ");
       scanf("%s", name);
       printf("Enter your height: ");
       scanf("%f", &f_cm);
       printf("%s, you are %.2f meter height\n" , name, f_cm/100);
   
       return 0;
   }
   ~~~

5. 

# Chapter 6

1. 编写一个程序，创建一个包含`26`个元素的数组，并在其中储存`26`个小写字母。然后打印数组的所有内容。

   ~~~c
   #include <stdio.h>
   
   int main(void)
   {
       const int i_NUM = 26;
       int i_count;
       char ch[i_NUM];
       for (i_count = 0; i_count < i_NUM; ++i_count) {
           ch[i_count] = 'a' + i_count;
       }
   
       for (i_count = 0; i_count < i_NUM; ++i_count) {
           printf("%c", ch[i_count]);
       }
       putchar('\n');
   
       return 0;
   }
   ~~~

2. 使用嵌套循环，按下面的格式打印字符。

   ~~~c
   /*
    *	$
    *	$$
    *	$$$
    *	$$$$
    *	$$$$$
    *
    * */
   #include <stdio.h>
   
   int main(void)
   {
       int i_num, j_num;
       for (i_num = 0; i_num < 5; ++i_num)
       {
           for (j_num = 0; j_num <= i_num; ++j_num)
               printf("$");
           putchar('\n');
       }
   
       return 0;
   }
   ~~~

3. 使用嵌套循环，按下面的格式打印字母。

   ~~~c
   /*
    *	F
    *	FE
    *	FED
    *	FEDC
    *	FEDCB
    *	FEDCBA
    *
    * */
   #include <stdio.h>
   
   int main(void)
   {
       int i_num, j_num;
       for (i_num = 0; i_num < 6; ++i_num)
       {
           for (j_num = 0; j_num <= i_num; ++j_num)
               printf("%c", 'F' - j_num);
           putchar('\n');
       }
   
       return 0;
   }
   ~~~

4. 使用嵌套循环，按下面的格式打印字母。

   ~~~c
   /*
    *	A
    *	BC
    *	DEF
    *	GHIJ
    *	KLMNO
    *	PQRSTU
    *
    * */
   #include <stdio.h>
   
   int main(void)
   {
       int i_num, j_num;
       char ch = 'A';
       for (i_num = 0; i_num < 6; ++i_num)
       {
           for (j_num = 0; j_num <= i_num; ++j_num)
               printf("%c", ch++);
           putchar('\n');
       }
   
       return 0;
   }
   ~~~

5. .编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母。

   ~~~c
   /*		A
    * 	   ABA
    *    ABCBA
    *   ABCDCBA
    *  ABCDEDCBA
    *
    * */
   
   ~~~