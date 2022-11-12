#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int max = (a < b) ? b : a;

	printf("%d와 %d 중 큰값은 %d\n", a, b, max);

	(a < b) ? printf("b가 큼\n") : printf("a가 크거나 같음\n");

	return 0;
}