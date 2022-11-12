#include <stdio.h>

int main() {
	//제어문
	//조건문
	//실행의 흐름을 다른 쪽 방향으로 보내버리는 것을 분기라고 합니다.
	//분기문
	//조건분기
	//if, if-else, if-else-if
	//switch-case
	//
	//무조건분기
	//goto
	//
	//반복문
	//for, while, do-while

	int a = 20;

	if (a < 20) {//단일조건문
		printf("a가 20보다 작다.\n");
	}

	if (a > 20) {//이중조건문
		printf("a가 20보다 크다.\n");
	}
	else{
		printf("a가 20보다 작거나 같다.\n");
	}

	//c언어는 정주값을 가지고 논리값을 처리하기 때문에
	//조건식 부분에 정수식도 가능하다.

	if (a - 20) {
		printf("a는 20과 다르다.");
	}
	else
	{
		printf("a는 20과 같다.\n");
	}

	return 0;
}