#include <stdio.h>

// ����ϰ� ���Ǵ� ������ �ڵ带 ���� �� ���

// return type �Լ���(�Ű�����){
// ��ɾ�
//}

int add(int a, int b) {

	int temp = 0;
	temp = a + b;

	return temp; //  return ���� �Լ��ȿ� ��ɾ ó���� ������� �Լ��ܺη� ������.
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