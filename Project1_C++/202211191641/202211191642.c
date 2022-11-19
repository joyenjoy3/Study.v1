#include <stdio.h>

// 함수의 인자 전달방식

// call by value

void Swap(int a, int b) {
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

// call by address
void PSwap(int* pa, int* pb) {
	int temp = 0;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {

	int a = 20;
	int b = 30;


	printf("\nSWAP\n");
	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);

	printf("a = %d, b = %d\n", a, b);

	printf("\nPSWAP \n");
	printf("a = %d, b = %d\n", a, b);
	PSwap(&a, &b);

	printf("a = %d, b = %d\n", a, b);


	return 0;
}