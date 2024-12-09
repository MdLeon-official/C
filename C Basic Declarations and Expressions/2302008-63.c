#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int series = 1;
    int sum = 0;
    printf("Input a positive number less than 100: ");
    scanf("%d", &n);
    if (n < 100) {
        for (int i = 1; series <= n; i++) {
            sum += pow(series, 4);
            series = series + i;
        }
    }
    printf("Sum of the series is %d\n", sum);
}
