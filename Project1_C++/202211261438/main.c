#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;

    // malloc은 할당후에 초기화를 하지 않는다.
    double* parray = (double*)malloc(sizeof(double) * size);


    printf("malloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    free(parray);

    printf("\n\n");

    // calloc은 할당후에 0으로 초기화를 한다.
    parray = (double*)calloc(size, sizeof(double));

    printf("calloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    printf("\n\n");
    size = 20;


    printf("realloc\n");
    // realloc은 할당 받은 공간을 재할당 할때 사용한다.
    parray = (double*)realloc(parray, sizeof(double) * size);

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }




    return 0;
}