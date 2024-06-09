#include <stdio.h>

int main() {
    int num32 = 2147483647;
    unsigned int unum32 = 4294967295;
    long long num64 = 9223372036854775807LL;

    // %d, %u 사용 예제
    printf("32-bit signed int: %d\n", num32);
    printf("32-bit unsigned int: %u\n", unum32);

    // %lld 사용 예제
    printf("64-bit signed long long: %lld\n", num64);

    // 형식 지정자 표현 기능 예제
    printf("10자리 폭, 오른쪽 정렬: %10d\n", num32);
    printf("10자리 폭, 왼쪽 정렬: %-10d\n", num32);
    printf("부호 출력: %+d\n", num32);
    printf("0으로 채우기: %010d\n", num32);

	printf("%d\n", 1234);
	printf("%d %d\n", 1234, -5678);
	//부호를 붙여서 출력
	//단순히 더하기 기호(+)를 출력하는 것이 아님
	printf("%+d %+d\n", 1234, -5678);
	
	//정수를 8자리로 맞추고 오른쪽 정렬해 출력
	printf("%8d\n", 1234);
	//왼쪽 빈공간으로 0으로 모두 채워서 출력
	printf("%08d\n", 1234);
	//왼쪽으로 정렬해 출력
	//빈공간이 공백이나 0으로 채워지지 않음
	printf("%-08d\n", 1234);

    return 0;
}
