/*
 *    Date:  Wed Jul 28 06:17:57 PM CST 2021
 *    Goal:
 *           提示用户输入杯数，以品脱、盎司、汤勺、茶勺为单位显示容量。
 *           在美国的体积测量系统中,1品脱等于2杯,1杯等于8盎司.1盎司等于2大汤勺,1大汤勺等于3茶勺。
 * */

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

/*
 *    在 gcc (GCC) 11.1.0下的结果为:
 *------------------------------------------------------
 *    How many cups of tea would you like: 150
 *    Pints: 75.00 , ounces: 1200, tablespoons: 2400, teaspoons: 7200
 *------------------------------------------------------
 *
 * */
