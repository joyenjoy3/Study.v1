#include <stdio.h>
#include "fcal.h"


// 파일 분할.





int main() {

	int a = 20;
	int b = 30;


	float ret = fadd(a, b); // call _fadd 
	printf("%d + %d = %f\n", a, b, ret);

	ret = fsub(a, b);
	printf("%d - %d = %f\n", a, b, ret);

	ret = fmul(a, b);
	printf("%d x %d = %f\n", a, b, ret);

	ret = fdiv(a, b);
	printf("%d x %d = %f\n", a, b, ret);

	return 0;
}


