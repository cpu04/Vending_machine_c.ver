#include <stdio.h>

int main(void)
{
	while (1)
	{
		int coin = 0;
		int ans = 0;
		int abc = 0;

		printf("금액을 입력해주세요. \n");
		scanf_s("%d", &coin);
		printf("음료를 선택해주세요. \n 1. 사과주스 : 500원 \n 2. 오렌지 주스 : 700원 \n 3. 포도 주스 : 1200원 \n");
		scanf_s("%d", &ans);

		switch (ans)
		{
		case 1:
			if (coin == 500) {
				printf("사과 주스가 나왔습니다. 안녕히 가세요. \n");
				break;
			}
			else if (coin >= 500) {
				printf("사과주스가 나왔습니다. \n");
				abc = coin - 500;
				printf("거스름돈은 %d원 입니다. \n", abc);
				break;
			}
			else {
				printf("잔액이 부족합니다. 금액을 반환합니다. \n");
				break;
			}
		case 2:
			if (coin == 700) {
				printf("오렌지 주스가 나왔습니다. 안녕히 가세요. \n");
				break;
			}
			else if (coin >= 700) {
				printf("오렌지 주스가 나왔습니다. \n");
				abc = coin - 700;
				printf("거스름돈은 %d원 입니다. \n", abc);
				break;
			}
			else {
				printf("잔액이 부족합니다. 금액을 반환합니다. \n");
				break;
			}
		case 3:
			if (coin == 1200) {
				printf("포도 주스가 나왔습니다. 안녕히 가세요. \n");
				break;
			}
			else if (coin >= 1200) {
				printf("포도주스가 나왔습니다. \n");
				abc = coin - 1200;
				printf("거스름돈은 %d원 입니다.\n", abc);
				break;
			}
			else {
				printf("잔액이 부족합니다. 금액을 반환합니다. \n");
				break;
			}
		default:
			printf("잘못된 값입니다. \n");
			break;
		}
	}
	return 0;
}
