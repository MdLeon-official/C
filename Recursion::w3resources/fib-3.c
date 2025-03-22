#include <inttypes.h>
#include <stdio.h>

int fibonacci(int n);
void fib_serie(int n);
int main() {
    int n;
    scanf("%d", &n);
    int result = fibonacci(n);
    fib_serie(n);
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n - 2);
}
void fib_serie(int n) {
    for(int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
