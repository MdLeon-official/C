
#include <stdio.h>

int main() {
    int a = 1;
    int b = 100;

    for (int i = 0; i < 11; i++) {
        printf("a=%d      b=%d\n", a, b);
        a = a + 5;
        b = b - 10;
    }

    return 0;
}
