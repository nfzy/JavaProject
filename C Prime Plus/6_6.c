#include<stdio.h>
int main()
{
    int i_first_num;
    int i_last_num;

    printf("Enter first num: ");
    scanf("%d", &i_first_num);
    printf("Enter last num: ");
    scanf("%d", &i_last_num);

    int i_count;
    printf("|\tsz\t|\tpf\t|\tlf\t|\n");
    for (i_count = i_first_num; i_count <= i_last_num; ++i_count)
        printf("|\t%03d\t|\t%03d\t|\t%03d\t|\n", i_count, i_count * i_count, i_count * i_count * i_count);


    return 0;
}
