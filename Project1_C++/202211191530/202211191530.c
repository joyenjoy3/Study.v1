#include <stdio.h>

// returntype 함수명(매개변수) {
// 명령어를 나열
// }
// void는 return 값이 없다는 의미입니다.

void PrintMonster() {
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
	printf("Monster");
}

// 함수를 사용했을 경우의 장점.
// 재사용성, 모듈성, 가동성


int main() {

	// 어떤 코드가 반복적으로 나오는 경우
	// 코드를 묶어서 하나의 단위로 만들어주는 기능이 있습니다.
	// 유용한 코드를 하나로 묶었을 때도 사용.
	// 함수

	// ......
	PrintMonster();


	// ......
	PrintMonster();

	// ......
	PrintMonster();


	return 0;
}