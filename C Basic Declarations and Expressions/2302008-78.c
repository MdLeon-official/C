#include <stdio.h>

int main()
{
    int x = 10;
    printf("Predecrementing:\n");
    printf("x = %d\n", x);
    printf("x-- = %d\n", x--);
    printf("x = %d\n", x);

    printf("\nPostdecrementing:\n");
    x = 10;
    printf("x = %d\n", x);
    printf("--x = %d\n", --x);
    printf("x = %d\n", x);

    return 0;
}
