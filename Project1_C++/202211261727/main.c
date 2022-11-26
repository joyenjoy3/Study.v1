#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    FILE* fp;

    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("파일열기 실패");
        return;
    }

    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('x', fp);

    fclose(fp);


    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("파일열기 실패");

        return;
    }
    char c = 0;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    return 0;
}