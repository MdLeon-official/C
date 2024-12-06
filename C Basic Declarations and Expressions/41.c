#include <stdio.h>

int main() {
    int n, num = 1;
    printf("Input number of lines: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}
