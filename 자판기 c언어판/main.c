#include <stdio.h>
#include "system.h"

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

		if (ans == 1) {
			coin1(coin);
		}
		else if (ans == 2) {
			coin2(coin);
		}
		else if (ans == 3) {
			coin3(coin);
		}
		else {
			printf("잘못된 값입니다. \n");
		}
	}
	return 0;
}