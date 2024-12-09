#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    printf("Input any number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Sum = undefined\n");
        return 0;
    }

    if (n == 0) {
        printf("Sum = infinity\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += 1.0/i;
        if (i == 1) {
            printf("1");
        } else {
            printf(" + 1/%d", i);
        }
    }
    printf("\nSum = %.2f\n", sum);
    return 0;
}
