#include "system.h"

int coin1(int coin)
{
	int abc;

	if (coin == 500) {
		printf("��� �ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n");
	}
	else if (coin >= 500) {
		printf("����ֽ��� ���Խ��ϴ�. \n");
		abc = coin - 500;
		printf("�Ž������� %d�� �Դϴ�. \n", abc);
	} else if (coin < 500) {
		printf("�ܾ��� �����մϴ�. �ݾ��� ��ȯ�մϴ�. \n");
	}
}

int coin2(int coin)
{
	int abc;

	if (coin == 700) {
		printf("������ �ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n");
	}
	else if (coin >= 700) {
		printf("������ �ֽ��� ���Խ��ϴ�. \n");
		abc = coin - 700;
		printf("�Ž������� %d�� �Դϴ�. \n", abc);
	}
	else if (coin < 700) {
		printf("�ܾ��� �����մϴ�. �ݾ��� ��ȯ�մϴ�. \n");
	}
}

int coin3(int coin)
{
	int abc;

	if (coin == 1200) {
		printf("�����ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n");
	}
	else if (coin >= 1200) {
		printf("�����ֽ��� ���Խ��ϴ�. \n");
		abc = coin - 1200;
		printf("�Ž������� %d�� �Դϴ�. \n", abc);
	}
	else if (coin < 1200) {
		printf("�ܾ��� �����մϴ�. �ݾ��� ��ȯ�մϴ�. \n");
	}
}