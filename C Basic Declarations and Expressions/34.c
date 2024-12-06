#include <stdio.h>

int main() {
    int x, y, i, total = 0;
    printf("Input first number: ");
    scanf("%d", &x);
    printf("Input second number: ");
    scanf("%d", &y);

    if (x < y) {
        return 0;
    }

    printf("\nList of odd numbers: ");
    for (i = y; i <= x; i++) {
        if ((i % 2) != 0) {
            printf("%d\n", i);
            total += i;
        }
    }

    printf("Sum=%d\n", total);

    return 0;
}
