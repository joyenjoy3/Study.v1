#include <stdio.h>

int main() {
	int value = 1231.12312f;

	value = -1;
	while (value > 0)
	{
		value -= 23.234f;
		
		printf("while value = %f \n", value);
	}

	value = 1231.12312f;

	value = -1;

	do {
		value -= 23.234f;

		printf("do - while value = %lf\n", value);


	} while (value > 0);


	return 0;
}