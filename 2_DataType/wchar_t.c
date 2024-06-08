#include <stdio.h>
#include <wchar.h>

int main() {
    wchar_t ch = L'あ'; // 일본어 문자
    wprintf(L"Character: %lc\n", ch);
    wprintf(L"Size of wchar_t: %zu bytes\n", sizeof(wchar_t));
    return 0;
}
