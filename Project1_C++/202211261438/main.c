#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;

    // malloc�� �Ҵ��Ŀ� �ʱ�ȭ�� ���� �ʴ´�.
    double* parray = (double*)malloc(sizeof(double) * size);


    printf("malloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    free(parray);

    printf("\n\n");

    // calloc�� �Ҵ��Ŀ� 0���� �ʱ�ȭ�� �Ѵ�.
    parray = (double*)calloc(size, sizeof(double));

    printf("calloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    printf("\n\n");
    size = 20;


    printf("realloc\n");
    // realloc�� �Ҵ� ���� ������ ���Ҵ� �Ҷ� ����Ѵ�.
    parray = (double*)realloc(parray, sizeof(double) * size);

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }




    return 0;
}