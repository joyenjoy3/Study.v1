#include <stdio.h>

int main() {
	int a = 20;
	int c = 0;

	a++;	//������
	// a = a + 1;
	printf("a++ = %d\n", a);

	++a;	//������
	// a = a + 1;
	printf("++a = %d\n", a);

	c = a++;
		// c = a;
		// a = a + 1;

		printf("a = %d, c = %d\n", a, c);
	
	c = ++a;
		// a = a + 1;
		// c = a;
		printf("a = %d, c = %d\n", a, c);

	a--;
	//a = a - 1

		return 0;
}