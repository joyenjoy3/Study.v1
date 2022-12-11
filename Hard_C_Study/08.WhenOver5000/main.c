#include <stdio.h>

int main(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break; // break문 실해! 따라서 반속문 탈출
		num++;
	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}