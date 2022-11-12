#include <stdio.h>

int main() {
	int a;
	int b;

	float c = 12.234f;

	a = 20;

	b = 30;

	a = b;


	// 기본 데이터 타입간에는 컴파일러 자동으로 형번환을 시킵니다. 
	// 묵시적 형변환
	// 실수타입에서 정수타입으로 대입을 하는 경우 명시적 형변환을 하는 게 좋습니다. 

	a = (int)c; // 명시적형변환이라고 함.
	printf("a = %d\n", a);

	a = c;
	printf("a = %d\n", a);

	a += 1; // 축약형
	// a = a + 1;
	printf("a = %d\n", a);


	a /= 1;
	// a = a / 1;
	printf("a = %d\n", a);

	return 0;
}