#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int global = 0;   // 외부변수, 전역변수

int main() {
    int a = 0;   // 로컬변수, 자동변수

    static int b = 0;   // 로컬변수, 정적변수

    // 실행중에 변수의 사이즈를 결정해야 할때가 있습니다.
    // 

    int size = 0;
    printf("입력하실 정수의 갯수를 입력하세요: ");
    scanf("%d", &size);


    int* pa = (int*)malloc(sizeof(int) * size);   // 동적메모리 할당

    for (int i = 0; i < size; i++) {
        pa[i] = i;
    }

    for (int i = 0; i < size; i++) {
        printf("pa[%d] = %d\n", i, pa[i]);
    }

    free(pa);   // 동적메모리 반납



    return 0;
}