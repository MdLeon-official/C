#include <stdio.h>

int number(int *n1, int *n2);

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    number(&n1, &n2);
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}

int number(int *n1, int *n2) {
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}
