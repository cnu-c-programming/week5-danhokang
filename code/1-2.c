#include <stdio.h>

int sum_range(int *start, int *end) {
    int sum = 0;
    while (start < end) {
        sum += *start;
        start++;
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int result = sum_range(&arr[1], &arr[4]); // 20+30+40

    printf("%d\n", result);
    return 0;
}
