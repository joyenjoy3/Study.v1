#include <stdio.h>
int main() {
	// 0 ~ 100 �����ϼ���...
	int a0 = 0;
	int a1 = 1;
	int a2 = 2;
	//...
	int a98 = 98;
	int a99 = 99;
	int a100 = 100;

	if (a0 % 2 == 0) {
		printf("a0 = %d\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d\n", a1);
	}


	// ������ ����Ÿ Ÿ���� ������ ������ �ʿ��Ҷ� 
	// ����ϴ� ����� �Դϴ�.
	// �迭
	int array[101];

	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}
	for (int i = 0; i < 101; i++) {
		printf("array[%d] = %d \n", i, array[i]);
	}




	return 0;
}