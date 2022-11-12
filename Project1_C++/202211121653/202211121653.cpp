#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buttonNum = 0;

	// 0 : TV 켜
	// 1 : TV 꺼
	// 2 : volume up
	// 3 : volume down
	printf("버튼 번호를 입력하요:");
	scanf("%d", &buttonNum);

	if (buttonNum == 0) {

	}
	else if (buttonNum == 1)
	{

	}
	else if (buttonNum == 2)
	{

	}
	else if (buttonNum == 3)
	{

	}


	//정수갑의 변화 따라서 분기 처리를 할 때
	//switch -case 문을 사용하는 것이 좋습니다.
	// 가독성이 좋습니다.

	switch (buttonNum)
	{
	case 0 :
		printf("TV 켜\n");
		break;

	case 1:
		printf("TV 꺼\n");
		break;

	case 2:
		printf("Volume up\n");
		break;

	case 3:
		printf("Volume Down\n");
		break;

	default:
		printf("Wrong Number\n");
		break;
	}

	return 0;
}