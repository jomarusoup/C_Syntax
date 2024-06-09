#include <stdio.h>

int main() {
    // short 변수 선언 및 초기화
    short num1 = 32000;
    short num2 = -32000;

    // short 범위를 초과하는 값 할당 시 예제
    short num3 = 32768; // 2의 보수법으로 음수로 변환됨
    short num4 = -32769; // 2의 보수법으로 양수로 변환됨

    // short 변수 출력
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3 (32768 할당): %d\n", num3);
    printf("num4 (-32769 할당): %d\n", num4);

    return 0;
}

