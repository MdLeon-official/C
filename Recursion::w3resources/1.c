#include <stdio.h>

void number(int n);

int main() {
    printf("The natural numbers are: ");
    int n;
    scanf("%d", &n);
    number(n);
}

void number(int n) {
    if ( n < 1) {
        return;
    }
    number(n - 1);
    printf("%d ", (n));
}
