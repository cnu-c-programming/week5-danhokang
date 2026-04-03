#include <stdio.h>

int main() {
    int val = 7;
    int other = 77;

    int *p = &val;  // const 제거

    // *p = 10;      // 필요 없음 (삭제해도 됨)
    // p = &other;   // 필요 없음 (삭제해도 됨)

    printf("%d\n", *p);

    return 0;
}
