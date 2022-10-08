#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, sqr_c;//兩股與一斜邊
	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				sqr_c = c * c;
				if ((sqr_c == a * a + b * b) && (a < b))
					printf("一股=%3d   ,另一股=%3d   ,斜邊=%3d\n",a,b,c);
			}
		}
	}
}