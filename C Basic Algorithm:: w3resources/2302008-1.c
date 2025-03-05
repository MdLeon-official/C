#include <stdio.h>

int main() {
    int x,y;
    printf("Input two integers:\n");
    scanf("%d %d", &x, &y);

    if (x == y) {
        printf("%d\n", (x + y) * 3);
    }
    else {
        printf("%d\n", x + y);
    }
    return 0;
}
