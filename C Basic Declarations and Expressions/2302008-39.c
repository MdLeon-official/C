#include <stdio.h>

int main() {
    int x, y, sum=0;
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    for (int i = x; i <= y; i++) {
        sum = sum + i;
        if (i % 17 == 0) {
            sum = sum - i;
        }
    }
    printf("Sum: %d\n", sum);
}
