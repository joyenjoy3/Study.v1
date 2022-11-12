#include <stdio.h>

int main() {
	// 포인터
	int a;
	a = 20;

	printf("&a = %p\n", &a);

	int* pa;		//'*' 포인터형 지정자

	pa = &a;

	printf("&pa = %p\n", &pa);

	int** ppa;

	ppa = &pa;

	// *&a '&a'에 할당된 메모리 공간을 의미?

	**ppa; // 포인터 연산자
	**&pa;
	*pa;
	*&a;
	a;

	printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a =%p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n", **ppa, **&pa, *pa, *&a, a);

	return 0;
}