/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 10:36:52 AM CST 2021
 *    Effect:
 *          将年龄转换为天数，没有考虑闰年问题
 *-----------------------------------------------------
 *
 * */

#include <stdio.h>

int main(void)
{
    short int age;
    printf("Ente You age number: ");
    printf("___\b\b\b");
    scanf("%hd", &age);
    if(age <= 0)
        printf("You are a theif.");
    else 
        printf("You are %hd years old and You have %d long days." , age , age*365);
    putchar('\n');

    return 0;
}

/*
 *	在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *	Ente You age number: 99
 *	You are 99 years old and You have 36135 long days.
 *---------------------------------------------------------
 *
 * */
