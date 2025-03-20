#include <stdio.h>

int number(int n);

int main() {
    int n;
    scanf("%d", &n);

    printf("Factorial = %d\n", number(n));
}

int number(int n) {
    if (n == 0) {
        return 1;
    }
    // 5! = 5*4*3*2*1
    // n! = n*(n-1)*(n-2)*...*1
    return n * number(n-1);
}
