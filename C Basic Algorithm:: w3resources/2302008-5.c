#include <stdio.h>

int check(int n) {
    if (n % 3 == 0 || n % 7 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x;
    printf("Input a integer:\n");
    scanf("%d", &x);

    printf("%d\n", check(x));
    return 0;
}
