#include <stdio.h>

#define NUM 8
int main(void)
{
	double d_array1[NUM], d_array2[NUM];
	int i;
	for(i = 0; i < NUM; ++i)
		scanf("%lf", &d_array1[i]);
	
	for(i = 0; i < NUM; ++i){
		printf("%.2lf\t", d_array1[i]);
	}

	putchar('\n');
	d_array2[0] = d_array1[0];
	for(i = 1; i< NUM; ++i)
		d_array2[i] = d_array2[i-1] + d_array1[i];

	for(i = 0; i < NUM; ++i){
		printf("%.2lf\t", d_array2[i]);
	}


	return 0;
	
}
