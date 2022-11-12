#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;

	printf("용돈 금액을 입력하세요: ");
	scanf("%d", &money);

		if ((money <= 100000) && (money > 100000)) { // 다중 조건문
			printf("PC방\n");
		}
		else if ((money <= 100000) && (money > 80000)) {
			printf("극장\n");
		}
		else if ((money <= 80000) && (money > 60000)) {
			printf("중국집\n");
		}
		else if ((money <= 60000) && (money > 30000)) {
			printf("노래방\n");
		}
		else { // 생략가능
			printf("집 낮잠\n");
		}

	return 0;
}