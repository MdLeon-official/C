#include <stdio.h>
#include <sys/types.h>

int number(int n1);

int main() {
    printf("Sum of series: %d", number(5));
    return 0;
}

int number(int n1) {
    int series = 0;
    for (int i = 1; i <= n1; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        series += factorial/i;
    }
    return series;
}
