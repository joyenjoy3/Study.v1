#include <stdio.h>

void PrintGlobal();   // �Լ� ����� 

int global = 100;   // ����, �ܺκ���

int add(int a, int b) {   // �Ű�����(���ú���, �ڵ�����)
    int temp = 0;   // ���ú���, �ڵ�����

    temp = a + b;

    global = 100;

    return 0;
}

int GetScore(int value) {
    static int sum = 0;   // ���ú���, ��������

    sum += value;

    return sum;
}


int main() {
    int a; // ���ú���(��������), �ڵ�����
    int b;

    a = 10;
    b = 20;

    {
        int a = 100; // ���ú���, �ڵ�����

        a;
    }

    PrintGlobal();
    global = 10;


    for (int i = 0; i < 10; i++) {
        GetScore(i);
    }

    int sum = GetScore(0);

    printf("sum = %d\n", sum);

    return 0;
}