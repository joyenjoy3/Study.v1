#include <stdio.h>

int main() {
	// ��Ʈ ������
	// &(��Ʈ And), |(��ƮOr), ^(exclusive Or), 
	// ~(��Ʈ not), <<(left shift), <<(right shiht)

	unsigned char a = 1;
	unsigned char b = 2;
	unsigned char ret = 0;

	//		00000001 (a)
	//		00000010 (b)
	// (a&b)00000000
	// (a|b)00000011
	// (a^b)00000011
	//(~a)  11111110

	ret = a & b;
	printf("ret = %d\n", ret);

	ret = a | b;
	printf("ret = %d\n", ret);

	// 00 = 0
	// 10 = 1
	// 01 = 1
	// 11 = 0

	ret = a ^ b;
	printf("ret = %d\n", ret);

	a = 1; 
	b = 2;

	// 00000001 (a)
	// 00000010 (b)

	// 00000011 (a ^ b ) = a;
	// 00000010 (b)
	// 00000001 (a ^ b) = b;
	// 00000011 (a)
	// 00000010 (a)

	printf("a= %d, b= %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	ret = ~a;
	printf("ret = %d\n", ret);

	return 0;
}