#include<stdio.h>
#include<stdlib.h>

int main()
{
	// [1] manager固定薪水   [2] hourly 40小時前固定時薪 超過以1.5倍計算
	// [3]委員250+5.7%的週營業額  [4]peiceworker一個物品固定價錢每人只負責一樣
	int payCode, hours,item;
	float money;

	printf("請輸入單週薪水查閱代碼: ");
	scanf("%d",&payCode);
	printf("\n");
	switch (payCode)
	{
	case 1:
		printf("你的薪水是固定的\n");
		break;

	case 2:
		printf("請輸入你的時薪($00.00): ");
		scanf("%f", &money);
		printf("\n請輸入你單週累計班時間(整數小時): ");
		scanf("%d", &hours);

		if (hours < 41) printf("此週的薪水為$%.2f", money * hours);
		else printf("此週的薪水為$%.2f",money*40+(hours - 40)*money*1.5);
		break;

	case 3:
		printf("請輸入週營業額($00.00): ");
		scanf("%f", &money);
		printf("\n此週的薪水為$%.2f",250+0.057*money);
		break;

	case 4:
		printf("請輸入你所負責的物品價格($00.00/個): ");
		scanf("%f", &money);
		printf("\n請輸入你此週累計組裝的物品數量(整數): ");
		scanf("%d", &item);
		printf("此週的薪水為$%.2f", money* item);
		
		break;

	default:
		printf("代碼無效");
		break;
	}
}