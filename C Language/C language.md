## 基本数据类型

### 关键字

**基本数据类型由11个关键字组成：$int、long 、short 、unsigned 、char 、float 、double 、signed 、\_Bool 、\_Complex 、\_Imaginary$**

### 有符号整型

**有符号整型可用于表示正数和负数**

* $int$	---	系统给定的数据类型。C语言规定$int$类型不小于16位。
* $short或short\ int$	---	最大的$short$类型整数小于或等于最大的$int$类型整数。C语言规定$ short$类型至少占16位。
* $long或long\ int$	---	该类型可表示的整数大于或等于最大的$int$类型整数。C语言规定$long$类型至少占32位。
* $long\ long或long\ long\ int$	---	该类型可表示的整数大于或等于最大的$long$类型整数。C语言规定$long\ long$类型至少占64位

**一般而言，$int$类型宽度要么和$long$类型相同，要么和$short$类型相同($short \leq int \leq long$)。**

### 无符号整型

**无符号整数只能用于表示零和正整数，无符号整型比有符号整型的大，加上前缀关键字$unsigned$表示无符号整型：$unsigned int 、unsigned short 、unsigned long$。单独的$unsigned$相当于$unsigned int$。**

###　字符类型

**可打印出来的符号($A 、\& 、 +$)都是字符。$char$型表示一个字符要占用一字节内存，如果要表示基本字符集，也可以是16位或更大。**

* $char$	---	字符类型的关键字。可以在$char$前面加上关键字$signed$或$unsigned$来指明具体使用那一种类型。

### 布尔类型

