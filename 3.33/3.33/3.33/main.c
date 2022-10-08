#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 0; j < 12; j++) printf("+");
        }
        else
        {
            for (j = 0; j < 12; j++)
            {
                if (j % 11 == 0) printf("+");
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

}