#include <stdio.h>


// 문자열
// C언어에서는 문자열을 문자배열.


void PrintString(char* pstr, int size) {
    for (int i = 0; i < size; i++) {
        putchar(pstr[i]);
    }
}


void PrintString2(char* pstr) {
    while (*pstr) {
        putchar(*pstr);
        pstr++;
    }
}

int main() {
    char str[] = "Monster";   // 문자열
    char str2[] = { 'M', 'o', 'n', 's', 't', 'e', 'r' };   // 문자배열

    printf("str size = %d\n", sizeof(str));
    printf("str2 size = %d\n", sizeof(str2));

    PrintString(str, sizeof(str));
    putchar('\n');
    PrintString(str2, sizeof(str2));
    putchar('\n');


    putchar('\n');
    PrintString2(str);


    printf("%s\n", str);

    printf("%s\n", str2);


    putchar(65);

    return 0;
}