#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inputValue = 0;

Start: // ���̺�

	printf("�������� �Է� �ϼ���: ");
	scanf("%d", &inputValue);

	if (inputValue > 10) {
		goto Start; // ������ �б�
	}
	else if (inputValue == -1) {
		goto Exit;
	}
	
	printf("\ninputValue = %d\n", inputValue);

	goto Start;

	printf("Before Exit\n");

Exit:
	printf("Afeter Exit\n");

	return 0;

}