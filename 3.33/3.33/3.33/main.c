#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, L, w;

    printf("��J�x�Τ���(�a): ");
    scanf("%d", &L);

    printf("��J�x�Τ��e(��): ");
    scanf("%d", &w);

    for (i = 1; i <= L; i++)
    {
        if ((i == 1) || (i == L))
        {
            for (j = 1; j <= w; j++) printf("+");
        }
        else
        {
            for (j = 1; j <= w; j++)
            {
                if ((j % w == 0) || (j % w == 1)) printf("+");
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

}