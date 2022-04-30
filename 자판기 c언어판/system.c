#include "system.h"

int coin1(int coin)
{
	int abc;

	if (coin == 500) {
		printf("사과 주스가 나왔습니다. 안녕히 가세요. \n");
	}
	else if (coin >= 500) {
		printf("사과주스가 나왔습니다. \n");
		abc = coin - 500;
		printf("거스름돈은 %d원 입니다. \n", abc);
	} else if (coin < 500) {
		printf("잔액이 부족합니다. 금액을 반환합니다. \n");
	}
}

int coin2(int coin)
{
	int abc;

	if (coin == 700) {
		printf("오렌지 주스가 나왔습니다. 안녕히 가세요. \n");
	}
	else if (coin >= 700) {
		printf("오렌지 주스가 나왔습니다. \n");
		abc = coin - 700;
		printf("거스름돈은 %d원 입니다. \n", abc);
	}
	else if (coin < 700) {
		printf("잔액이 부족합니다. 금액을 반환합니다. \n");
	}
}

int coin3(int coin)
{
	int abc;

	if (coin == 1200) {
		printf("포도주스가 나왔습니다. 안녕히 가세요. \n");
	}
	else if (coin >= 1200) {
		printf("포도주스가 나왔습니다. \n");
		abc = coin - 1200;
		printf("거스름돈은 %d원 입니다. \n", abc);
	}
	else if (coin < 1200) {
		printf("잔액이 부족합니다. 금액을 반환합니다. \n");
	}
}