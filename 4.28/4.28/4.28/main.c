#include<stdio.h>
#include<stdlib.h>

int main()
{
	// [1] manager�T�w�~��   [2] hourly 40�p�ɫe�T�w���~ �W�L�H1.5���p��
	// [3]�e��250+5.7%���g��~�B  [4]peiceworker�@�Ӫ��~�T�w�����C�H�u�t�d�@��
	int payCode, hours,item;
	float money;

	printf("�п�J��g�~���d�\�N�X: ");
	scanf("%d",&payCode);
	printf("\n");
	switch (payCode)
	{
	case 1:
		printf("�A���~���O�T�w��\n");
		break;

	case 2:
		printf("�п�J�A�����~($00.00): ");
		scanf("%f", &money);
		printf("\n�п�J�A��g�֭p�Z�ɶ�(��Ƥp��): ");
		scanf("%d", &hours);

		if (hours < 41) printf("���g���~����$%.2f", money * hours);
		else printf("���g���~����$%.2f",money*40+(hours - 40)*money*1.5);
		break;

	case 3:
		printf("�п�J�g��~�B($00.00): ");
		scanf("%f", &money);
		printf("\n���g���~����$%.2f",250+0.057*money);
		break;

	case 4:
		printf("�п�J�A�ҭt�d�����~����($00.00/��): ");
		scanf("%f", &money);
		printf("\n�п�J�A���g�֭p�ո˪����~�ƶq(���): ");
		scanf("%d", &item);
		printf("���g���~����$%.2f", money* item);
		
		break;

	default:
		printf("�N�X�L��");
		break;
	}
}