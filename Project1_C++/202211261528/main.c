#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//���� 2�����迭
int main() {
	int column = 0;
	int row = 0;

	printf("���� ���� �Է��ϼ���:");
	scanf("%d", &column);

	printf("���� ���� �Է��ϼ���:");
	scanf("%d", &row);

	//�����޸� �Ҵ�
	int** pparray = (int**)malloc(sizeof(int*) * column);

	for (int i = 0; i < column; i++) {
		pparray[i] = (int*)malloc(sizeof(int*) * row);
	}
	
	//�����޸𸮿� ���� �Է�
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;
		}
	}

	//�����޸𸮿� �ִ� ���� ���
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
		}
	}

	//�����޸� �Ҵ� �ݳ�
	for (int i = 0; i < column; i++) {
		free(pparray[i]);
	}
	
	free(pparray);

	return 0;
}