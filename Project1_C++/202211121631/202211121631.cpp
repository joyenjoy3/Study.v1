#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;

	printf("�뵷 �ݾ��� �Է��ϼ���: ");
	scanf("%d", &money);

		if ((money <= 100000) && (money > 100000)) { // ���� ���ǹ�
			printf("PC��\n");
		}
		else if ((money <= 100000) && (money > 80000)) {
			printf("����\n");
		}
		else if ((money <= 80000) && (money > 60000)) {
			printf("�߱���\n");
		}
		else if ((money <= 60000) && (money > 30000)) {
			printf("�뷡��\n");
		}
		else { // ��������
			printf("�� ����\n");
		}

	return 0;
}