#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int AbsoCompare(int num1, int num2); // ���밪�� ū ���� ��ȯ
int GetAboValue(int num); //���������� ������ ��ȯ

int main(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ����: %d \n",
		num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAboValue(num1) > GetAboValue(num2))
		return num1;
	else
		return num2;
}

int GetAboValue(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}