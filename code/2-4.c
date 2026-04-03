#include <stdio.h>

long my_strtol(char *str, char **endptr) {
    long result = 0;

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    *endptr = str;
    return result;
}

int main() {
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str, &end);

    printf("%ld %s\n", val, end);

    return 0;
}
