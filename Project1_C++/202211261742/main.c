#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int buff[] = { 10, 20, 30, 40, 50 };

    FILE* fp;

    int size = 0, count = 0;

    fp = fopen("binary.bin", "wb");

    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return  0;
    }
    size = sizeof(int);
    count = sizeof(buff) / sizeof(int);

    // 파일쓰기
    fwrite(buff, size, count, fp);

    fclose(fp);

    int output[6];
    // 파일 읽기
    fp = fopen("binary.bin", "rb");
    if (fp == NULL) {
        printf("파일 열기 실패");
        return 0;
    }

    /*
    for (int i = 0; i < count; i++) {
       fread(&output[i], size, 1, fp);
    }
    */

    fread(output, size, 5, fp);

    for (int i = 0; i < count; i++) {
        printf("output[%d] = %d\n", i, output[i]);
    }

    fclose(fp);


    return 0;
}