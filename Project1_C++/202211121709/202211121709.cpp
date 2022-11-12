#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inputValue = 0;

Start: // 레이블

	printf("정수값을 입력 하세요: ");
	scanf("%d", &inputValue);

	if (inputValue > 10) {
		goto Start; // 무조건 분기
	}
	else if (inputValue == -1) {
		goto Exit;
	}
	
	printf("\ninputValue = %d\n", inputValue);

	goto Start;

	printf("Before Exit\n");

Exit:
	printf("Afeter Exit\n");

	return 0;

}