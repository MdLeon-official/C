
#include <stdio.h>

int main() {
    int n, i;

    printf("Input a number(integer): ");
    scanf("%d", &n);

    printf("\nSquare of each even between 1 and %d:\n", n);
    for(i=2; i<=n; i+=2) {
        printf("%d^2 = %d\n", i, i*i);
    }

    printf("\nSquare of each odd between 1 and %d:\n", n);
    for(i=1; i<=n; i+=2) {
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}
