#include <stdio.h>

int number(int n);

int main() {
    printf("The natural numbers are: ");
    int n;
    scanf("%d", &n);

    printf("Sum = %d\n", number(n));
}

int number(int n) {
    if ( n < 1) {
        return 0;
    }
    return n + number(n-1);
}
