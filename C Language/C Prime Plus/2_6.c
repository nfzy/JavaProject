/*
 *-----------------------------------------------------
 *    Date: Tue Jul 20 11:40:53 AM CST 2021
 *    Effect:
 *          toes = 10;
 *          toes + toes = 20;
 *          toes x toes = 100;
 *-----------------------------------------------------
 *
 * */

#include <stdio.h>

int main(void)
{
    char toes=10;
    printf("toes = %hu\n" , toes);
    printf("toes + toes = %d\n" , toes*2);
    printf("toes x toes = %d\n" , toes*toes);

    return 0;
}

/*
 *	在gcc (GCC) 11.1.0下的结果为:
 *---------------------------------------------------------
 *  toes = 10
 *  toes + toes = 20
 *  toes x toes = 100
 *---------------------------------------------------------
 *
 * */
