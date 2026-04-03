#include <stdio.h>

void echo() {
    char buf[5];

    fgets(buf, sizeof(buf), stdin);  

    printf("%s", buf);
}

int main() {
    int x = 42;

    echo();

    return 0;
}
