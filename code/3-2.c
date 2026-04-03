#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    printf("%d\n", x);

    int *const ptr = &x;  // 포인터 고정

    *ptr = y;  // 값 변경 (x = 20)

    printf("%d\n", x);

    return 0;
}
