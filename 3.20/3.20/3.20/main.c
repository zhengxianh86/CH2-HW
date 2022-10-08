#include<stdio.h>
#include<stdlib.h>

int main()
{
	while (1)
	{
		float hours, rat;
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%f", &hours);
		
		if (hours == -1) break;

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rat);

		if (hours < 41)
			printf("Salary is $%.2f\n", hours * rat);
		else
			printf("Salary is $%.2f\n", rat*40+(hours-40)*rat*1.5);
	}
}