#include <stdio.h>

int number(int n1, int n2);

int main() {
    int n1,n2;
    scanf("%d %d", &n1, &n2);

    printf("The total is = %d\n", number(n1,n2));
}

int number(int n1, int n2) {
    return n1 + n2;
}
