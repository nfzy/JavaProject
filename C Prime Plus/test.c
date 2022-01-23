#include <stdio.h>

#define SIZE 8

int main(void)
{
int k;
for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k*k < 26; k += 2, printf("Now k is %d\n", k))
	printf("k is %d in the loop\n", k);



	/*
	int by_twos[SIZE]; 
	int index;
	for (index = 0; index < SIZE; index++) 
		by_twos[index] = 2 * index;

	for (index = 0; index < SIZE; index++) 
		printf("%d ", *(by_twos+index));
		//printf("%d ", by_twos[index]);
	printf("\n");
	*/



	/*
	int n, m;

	n = 30; 
	while (++n <= 33) 
		printf("%d|", n);

	n = 30;
	do
		printf("%d|", n);
	while (++n <= 33);
	printf("\n***\n");

	for (n = 1; n*n < 200; n += 4)
		printf("%d\n", n);
	printf("\n***\n");

	for (n = 2, m = 6; n < m; n *= 2, m += 2)
		printf("%d %d\n", n, m);
	printf("\n***\n");

	for (n = 5; n > 0; n--) 
	{
		for (m = 0; m <= n; m++) 
			printf("=");
		printf("\n"); 
	}
	*/



	/*
	char ch;

	scanf("%c", &ch);
	while (ch != 'g') 
	{
		printf("%c", ch); 
		// printf("%c", ++ch); 
		scanf("%c", &ch);
	}

	do {
		scanf("%c", &ch);
		printf("%c", ch);
	} while (ch != 'g');


	scanf("%c", &ch);
	for (ch = '$'; ch != 'g'; scanf("%c", &ch))
		printf("%c", ch);

	*/



	/*
	int i; 
	char ch;
	for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
		printf("%c", ch);
	*/



	/*
	int i = 0;
	while (++i < 4) 
		printf("Hi! ");
	do 
		printf("Bye! ");
	while (i++ < 8);
	*/



	/*
	   int i, j;
	   for(i = 0; i < 4; ++i)
	   {	
	   int i_count = 1;
	   for(j = 0; j < 8; ++j)
	   {
	   printf("$");
	   i_count = 0;
	   }

	   if(i_count == 0)
	   putchar('\n');
	   }
	   */

	/*
	   int i, j, list[10];
	   for (i = 0; i < 10; i++)
	   {
	   list[i] = 2 * i + 3;
	   for (j = 0; j <= i; ++j)
	   printf(" %d", list[j]);
	   printf("\n");
	   }
	   */

	return 0;
}


