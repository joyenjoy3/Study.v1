#include <stdio.h>

int main() {
	// ������
	int a;
	a = 20;

	printf("&a = %p\n", &a);

	int* pa;		//'*' �������� ������

	pa = &a;

	printf("&pa = %p\n", &pa);

	int** ppa;

	ppa = &pa;

	// *&a '&a'�� �Ҵ�� �޸� ������ �ǹ�?

	**ppa; // ������ ������
	**&pa;
	*pa;
	*&a;
	a;

	printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a =%p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n", **ppa, **&pa, *pa, *&a, a);

	return 0;
}