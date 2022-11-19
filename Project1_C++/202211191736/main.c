#include <stdio.h>

int* GetScore(int value) {
	int score = 0;

	score += value;

	return &score;
}

int* PGetScore(int value) {
	static int score = 0;

	score += value;

	return &score;
}

int main() {

	int* pa = GetScore(100);

	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);

	printf("PGetScore\n");
	pa = PGetScore(100);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);


	return 0;
}