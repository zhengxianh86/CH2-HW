#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	float  bal, chr, crd, lim,newBal;

	while(1)
	{
		printf("Enter account number (-1 to Ender): ");
		scanf("%d", &num);
		if (num == -1) break;

		printf("Enter beginning balance: ");
		scanf("%f", &bal);

		printf("Enter total charges: ");
		scanf("%f", &chr);

		printf("Enter total credits: ");
		scanf("%f", &crd);

		printf("Enter credit limit: ");
		scanf("%f", &lim);

		newBal = bal + chr - crd;
		if (lim < newBal)
		{
			printf("Account:\t%d\n", num);
			printf("Credit limit:\t%.2f\n", lim);
			printf("Balance:\t%.2f\n", newBal);
			printf("Credit limit Exceeded.\n\n");
		}
		else printf("\n");
	}
	
}