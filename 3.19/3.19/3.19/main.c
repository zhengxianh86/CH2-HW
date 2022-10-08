#include<stdio.h>
#include<stdlib.h>

int main()
{
	float pcp,rat,day,itc;//loan princinpal,interest rate,term of the loan in days,interest charge

	while (1)
	{
		printf("Enter loan princinpal (-1 to end): ");
		scanf("%f",&pcp);
		if (pcp == -1) break;

		printf("Enter interest rate: ");
		scanf("%f", &rat);

		printf("Enter term of the loan in days: ");
		scanf("%f", &day);

		itc = pcp * rat * day/365;
		printf("The interest charge is $%.2f\n",itc);
	}
}