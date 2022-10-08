#include<stdio.h>
#include<stdlib.h>

int main()
{
	float f;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf("%f", &f);

		if (f == -1) break;
		else
			printf("\nsalary is $%.2f\n", (200 + f * 0.09));
	}

}