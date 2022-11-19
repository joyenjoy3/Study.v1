#include <stdio.h>

// 빈번하게 사용되는 유용한 코드를 묶을 때 사용

// return type 함수명(매개변수){
// 명령어
//}

int add(int a, int b) {

	int temp = 0;
	temp = a + b;

	return temp; //  return 문은 함수안에 명령어를 처리한 결과값을 함수외부로 전달함.
}

int sub(int value, int value2) {
	return value - value2;
}

int mul(int a, int b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}


int main() {

	int a = 20;
	int b = 30;

	int ret = add(a, b);

	printf("%d + %d = %d\n", a, b, ret);

	ret = sub(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	ret = mul(a, b);
	printf("%d x %d = %d\n", a, b, ret);

	float fret = div(a, b);
	printf("%d / %d = %lf\n", a, b, fret);

	return 0;
}