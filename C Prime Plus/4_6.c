/*
 *	日期:	2022年 01月 17日 星期一 12:23:07 CST
 *
 *  功能:	先提示用户输入名,然后提示用户输入姓。在一行打印用户输入的名和姓,下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐
 *
 * */

#include <stdio.h>
#include "string.h"

int main(void)
{
    char first_name[20];
    char last_name[20];
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("Enter last name: ");
    scanf("%s", last_name);
    printf("%s %s\n%*lu %*lu\n", first_name, last_name, (int)strlen(first_name), strlen(first_name), (int)strlen(last_name), strlen(last_name));
    // printf("%s %s\n%zd %zd\n", first_name, last_name, strlen(first_name), strlen(last_name));
    printf("%s %s\n%-*lu %-*lu\n", first_name, last_name, (int)strlen(first_name), strlen(first_name), (int)strlen(last_name), strlen(last_name));

    return 0;
}

/*
 *	在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *  
 *  Enter first name: ZhouAn
 *  Enter last name: xdd12138
 *  ZhouAn xdd12138
 *       6        8
 *  ZhouAn xdd12138
 *  6      8
 *
 *------------------------------------------------------
 *
 * */
