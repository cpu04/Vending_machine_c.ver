#include <stdio.h>

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

		switch (ans)
		{
		case 1:
			if (coin == 500) {
				printf("��� �ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n");
				break;
			}
			else if (coin >= 500) {
				printf("����ֽ��� ���Խ��ϴ�. \n");
				abc = coin - 500;
				printf("�Ž������� %d�� �Դϴ�. \n", abc);
				break;
			}
			else {
				printf("�ܾ��� �����մϴ�. �ݾ��� ��ȯ�մϴ�. \n");
				break;
			}
		case 2:
			if (coin == 700) {
				printf("������ �ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n");
				break;
			}
			else if (coin >= 700) {
				printf("������ �ֽ��� ���Խ��ϴ�. \n");
				abc = coin - 700;
				printf("�Ž������� %d�� �Դϴ�. \n", abc);
				break;
			}
			else {
				printf("�ܾ��� �����մϴ�. �ݾ��� ��ȯ�մϴ�. \n");
				break;
			}
		case 3:
			if (coin == 1200) {
				printf("���� �ֽ��� ���Խ��ϴ�. �ȳ��� ������. \n");
				break;
			}
			else if (coin >= 1200) {
				printf("�����ֽ��� ���Խ��ϴ�. \n");
				abc = coin - 1200;
				printf("�Ž������� %d�� �Դϴ�.\n", abc);
				break;
			}
			else {
				printf("�ܾ��� �����մϴ�. �ݾ��� ��ȯ�մϴ�. \n");
				break;
			}
		default:
			printf("�߸��� ���Դϴ�. \n");
			break;
		}
	}
	return 0;
}
