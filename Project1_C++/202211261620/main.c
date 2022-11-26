#include <stdio.h>

int add(int a, int b) {
    int temp = 0;

    temp = a + b;

    return temp;
}

int sub(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int calculator(int(*pfunc)(int, int), int a, int b) {
    return pfunc(a, b);
}

int main() {

    int a = 20;
    int b = 30;

    int (*pfuncArray[3])(int, int); // 함수포인터 배열

    pfuncArray[0] = add;
    pfuncArray[1] = sub;
    pfuncArray[2] = mul;

    for (int i = 0; i < 3; i++) {
        printf("pfuncArray[%d] = %d\n", i, pfuncArray[i](a, b));
    }


    return 0;
}