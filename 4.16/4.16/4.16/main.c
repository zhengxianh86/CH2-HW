#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;

	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}


	printf("\n(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j >= i ; j--)
			printf("*");
		printf("\n");
	}
	

	printf("\n(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k = 0; k < (10 - i); k++)
			printf("*");
		printf("\n");
	}
	
	
	printf("\n(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < (9 - i); j++)
			printf(" ");
		for (k = 0; k <= i; k++)
			printf("*");
		printf("\n");
	}
}