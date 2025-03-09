#include <stdio.h>

int main() {
    int x, y;
    short int z;

    x = 123456;
    y = 654321;

    z = x + y;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of z: %d\n", z);

    /* The output for z will show an error (integer overflow) */

    return 0;
}
