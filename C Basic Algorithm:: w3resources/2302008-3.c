#include <stdio.h>

int check(int n1, int n2) {
    if ((n1 == 30 || n2 == 30) || (n1 + n2 == 30)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y;
    printf("Input a integers:\n");
    scanf("%d %d", &x, &y);

    printf("%d\n", check(x, y));
    return 0;
}
