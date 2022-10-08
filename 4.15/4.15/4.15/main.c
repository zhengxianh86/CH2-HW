#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	float money, rat;

	for (rat = 0.1; rat <= 0.125; rat = rat + 0.005)
	{
		money = 5000.00;
		for (i = 0; i < 15; i++)
		{
			money = money * (1 + rat);
		}
		printf("When rate is %.3f,total of money is %.2f\n\n",rat,money);
	}
}