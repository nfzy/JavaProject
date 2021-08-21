#include <stdio.h>

int main(void)
{
    puts("This program computes moduli.");
    int i_fir_num, i_sec_num;
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &i_sec_num);
    printf("Now enter the first operand: ");
    scanf("%d", &i_fir_num);
    while(i_fir_num > 0)
    {
        printf("%d %% %d is %d\n", i_fir_num, i_sec_num, i_fir_num % i_sec_num);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &i_fir_num);
    }
    puts("Done");

    return 0;
}
