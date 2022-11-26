#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//동적 2차원배열
int main() {
	int column = 0;
	int row = 0;

	printf("행의 값을 입력하세요:");
	scanf("%d", &column);

	printf("열의 값을 입력하세요:");
	scanf("%d", &row);

	//동적메모리 할당
	int** pparray = (int**)malloc(sizeof(int*) * column);

	for (int i = 0; i < column; i++) {
		pparray[i] = (int*)malloc(sizeof(int*) * row);
	}
	
	//동적메모리에 값을 입력
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;
		}
	}

	//동적메모리에 있는 값을 출력
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
		}
	}

	//동적메모리 할당 반남
	for (int i = 0; i < column; i++) {
		free(pparray[i]);
	}
	
	free(pparray);

	return 0;
}