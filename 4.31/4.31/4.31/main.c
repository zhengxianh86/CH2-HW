#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k, l;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < (4 - i); j++)
			printf(" ");
		for (k = 0; k <= i; k++)
			printf("*");


		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k = 0; k < (4 - i); k++)
			printf("*");
		
		for (l = 4; l > i; l--)
			printf("*");
		printf("\n");
	}
}s