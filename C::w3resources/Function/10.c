#include <stdio.h>

void check(int n1, int n2);

int main() {
    int n1, n2;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &n1);
    printf("Input highest search limit of perfect numbers : ");
    scanf("%d", &n2);

    printf("\nThe perfect numbers between %d to %d are :\n", n1, n2);
    check(n1, n2);
}

void check(int n1, int n2) {
    int sum;
    for (int i = n1; i <= n2; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d  ", i);
        }
    }
}
