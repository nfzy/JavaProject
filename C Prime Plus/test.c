#include <stdio.h>

int main(void)
{
	/*
	int a, b;
	printf("\t%d\n", printf("%%%d", 567));
	printf("\t%d\n", scanf("%d%d", &a, &b));
	*/

    int years;
    const double BASE=100.0;
    double daphone,deirdre;

    daphone=BASE;
    deirdre=BASE;
    years=0;

    while(daphone>=deirdre)
    {
        daphone+=BASE*0.1;
        deirdre+=deirdre*0.05;
        years++;
    }

    printf("%dYears\t%0.2f\t%0.2f\n",years,daphone,deirdre);

    return 0;
}
