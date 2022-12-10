#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan = 0, num1 = 1;
	printf("¸î ´Ü? ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf("%d x %d = %d \n", dan, num1, dan * num1);
		num1++;
	}
	return 0;
}