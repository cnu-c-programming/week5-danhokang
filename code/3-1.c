#include <stdio.h>

void read_only(const int *arr, int size) {

    // arr[0] = 999;  // ❌ 주석 제거하면 컴파일 에러 발생

    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\n");
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};

    read_only(nums, 5);

    return 0;
}
