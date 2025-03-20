#include <stdio.h>

int number(int n1);

int main() {
    int n1;
    scanf("%d", &n1);

    printf("The square of %d is = %d\n", n1, number(n1));
}

int number(int n1) {
    return n1 * n1;
}
