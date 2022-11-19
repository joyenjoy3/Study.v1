#include <stdio.h>
#include <stdlib.h>	
#include <time.h>

int main() {


	srand(time(NULL));
	int array[100];

	for (int i = 0; i < 100; i++) {
		array[i] = rand(); // rand()난수 발생함수
	}

	for (int i = 0; i < 100; i++) {

		if (array[i] % 2 == 0) {
			printf("array[%d] = %d \n", i, array[i]);
		}
	}

	return 0;
}