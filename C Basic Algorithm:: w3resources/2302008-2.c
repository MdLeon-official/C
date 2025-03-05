#include <stdio.h>

int difference(int n) {
    if (n > 51) {
        return (n-51)*3;
    } else {
        return 51-n;
    }
}

int main() {
    int x;
    printf("Input a integers:\n");
    scanf("%d", &x);

    printf("%d\n", difference(x));
    return 0;
}
