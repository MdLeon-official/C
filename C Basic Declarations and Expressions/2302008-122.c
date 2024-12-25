
#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;
    int count = 0;
    int num;

    printf("Input two integes (m, n):\n");
    scanf("%d", &m);
    scanf("%d", &n);

    num = m;

    while(count < n) {
        if(num % 2 == 0) {
            sum = sum + num;
            count++;
        }
        num++;
    }

    printf("\nSum of %d even numbers starting from %d:\n", n, m);
    printf("%d\n", sum);

    return 0;
}
