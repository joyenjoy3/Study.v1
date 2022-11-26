#include <stdio.h>

int add(int a, int b) {
	int temp = 0;

	temp = a + b;

	return temp;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int main() {
	int a = 20;
	int b = 30;

	int(*pfunc)(int, int); // 함수포인터 함수가 위치하고 있는 
						   // 메모리의 주소값을 저장하는 변수

	pfunc = &add;

	int ret = pfunc(a, b);
	printf("%d + %d = %d\n", a, b, ret);

	pfunc = sub;
	ret = pfunc(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	return 0;
}