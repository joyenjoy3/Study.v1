#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int global = 0;   // �ܺκ���, ��������

int main() {
    int a = 0;   // ���ú���, �ڵ�����

    static int b = 0;   // ���ú���, ��������

    // �����߿� ������ ����� �����ؾ� �Ҷ��� �ֽ��ϴ�.
    // 

    int size = 0;
    printf("�Է��Ͻ� ������ ������ �Է��ϼ���: ");
    scanf("%d", &size);


    int* pa = (int*)malloc(sizeof(int) * size);   // �����޸� �Ҵ�

    for (int i = 0; i < size; i++) {
        pa[i] = i;
    }

    for (int i = 0; i < size; i++) {
        printf("pa[%d] = %d\n", i, pa[i]);
    }

    free(pa);   // �����޸� �ݳ�



    return 0;
}