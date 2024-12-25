
#include <stdio.h>

int main() {
    int m, n, sum = 0;
    int count = 0;

    printf("Input two integes (m, n):\n");
    scanf("%d", &m);
    scanf("%d", &n);

    while(count < n) {
        if(m % 2 != 0) {
            sum = sum + m;
            count++;
        }
        m++;
    }

    printf("\nSum of %d odd numbers starting from %d:\n", n, m-count-1);
    printf("%d", sum);

    return 0;
}
