#include <stdio.h>

int main() {
	unsigned char a = 1;

	// 00000001
	// 00000010

	a = a << 1; //���� shift

	printf("a = %d\n", a);

	a = a << 2;

	printf("a = %d\n", a);

	a = a >> 1; // ������ shift
	printf("a = %d\n", a);

	a = a >> 2;
	printf("a = %d\n", a);


	return 0;
}
