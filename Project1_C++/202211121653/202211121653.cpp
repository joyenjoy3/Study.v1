#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buttonNum = 0;

	// 0 : TV ��
	// 1 : TV ��
	// 2 : volume up
	// 3 : volume down
	printf("��ư ��ȣ�� �Է��Ͽ�:");
	scanf("%d", &buttonNum);

	if (buttonNum == 0) {

	}
	else if (buttonNum == 1)
	{

	}
	else if (buttonNum == 2)
	{

	}
	else if (buttonNum == 3)
	{

	}


	//�������� ��ȭ ���� �б� ó���� �� ��
	//switch -case ���� ����ϴ� ���� �����ϴ�.
	// �������� �����ϴ�.

	switch (buttonNum)
	{
	case 0 :
		printf("TV ��\n");
		break;

	case 1:
		printf("TV ��\n");
		break;

	case 2:
		printf("Volume up\n");
		break;

	case 3:
		printf("Volume Down\n");
		break;

	default:
		printf("Wrong Number\n");
		break;
	}

	return 0;
}