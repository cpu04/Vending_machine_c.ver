#include <stdio.h>
#include "system.h"

int main(void)
{
	while (1)
	{
		int coin = 0;
		int ans = 0;
		int abc = 0;
		printf("�ݾ��� �Է����ּ���. \n");
		scanf_s("%d", &coin);
		printf("���Ḧ �������ּ���. \n 1. ����ֽ� : 500�� \n 2. ������ �ֽ� : 700�� \n 3. ���� �ֽ� : 1200�� \n");
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
			printf("�߸��� ���Դϴ�. \n");
		}
	}
	return 0;
}