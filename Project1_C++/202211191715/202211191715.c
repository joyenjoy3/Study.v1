#include <stdio.h>

void PrintGlobal();   // 함수 선언부 

int global = 100;   // 전역, 외부변수

int add(int a, int b) {   // 매개변수(로컬변수, 자동변수)
    int temp = 0;   // 로컬변수, 자동변수

    temp = a + b;

    global = 100;

    return 0;
}

int GetScore(int value) {
    static int sum = 0;   // 로컬변수, 정적변수

    sum += value;

    return sum;
}


int main() {
    int a; // 로컬변수(지역변수), 자동변수
    int b;

    a = 10;
    b = 20;

    {
        int a = 100; // 로컬변수, 자동변수

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