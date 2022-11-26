#include <stdio.h>

int main() {
    int array[5][5];   // 이차원배열   

    int(*parray)[5] = array;



    array[3][2] = 1000;

    *(*(array + 3) + 2) = 1000;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }



    return 0;
}