
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        sum += 1.0/i;
    }

    printf("Sum: %f\n", sum);
    return 0;
}
