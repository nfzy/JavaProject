/*
 *	日期:	2022年 01月 17日 星期一 12:12:39 CST
 *
 *  功能:	提示用户输入名字,并执行以下操作:
 *              a.打印名字,包括双引号;
 *              b.在宽度为 20 的字段右端打印名字,包括双引号;
 *              c.在宽度为 20 的字段左端打印名字,包括双引号;
 *              d.在比姓名宽度宽 3 的字段中打印名字。
 *
 * */

#include <stdio.h>
#include "string.h"

int main(void)
{
    printf("Enter your name: ");
    char name[40];
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%-*s\"\n", (int)strlen(name)+3, name);
    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *
 *  Enter your name: Zhouan
 *  "Zhouan"
 *  "              Zhouan"
 *  "Zhouan              "
 *  "Zhouan   "
 *
 *------------------------------------------------------
 *
 * */
