#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int max = (a < b) ? b : a;

	printf("%d�� %d �� ū���� %d\n", a, b, max);

	(a < b) ? printf("b�� ŭ\n") : printf("a�� ũ�ų� ����\n");

	return 0;
}