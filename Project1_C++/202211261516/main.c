#include <stdio.h>

void SetArray(int(*parray)[5], int column, int row) {

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			parray[i][j] = i * row + j;
		}
	}
}

void PrintArray(int(*parray)[5], int column, int row) {
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
		}
	}

}

int main() {
	int array[5][5];

	SetArray(array, 5, 5);

	PrintArray(array, 5, 5);

	return 0;
}