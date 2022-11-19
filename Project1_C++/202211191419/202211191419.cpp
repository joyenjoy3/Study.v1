#include <stdio.h>

int main()
{

	// 제어문
	// 조건문

	// 반복문
	// for, while, do-while

	for (int i = 0; i < 10; i++) {
		printf("i = %d \n", i);
	}

	for (int i = 0, j = 10; i < 10 && j > 0; i += 2, j -= 2) {
		printf("i = %d, j = %d \n", i, j);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}

		return 0;
}