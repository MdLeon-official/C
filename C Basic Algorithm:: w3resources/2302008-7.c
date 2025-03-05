#include <stdio.h>

int check(int n1, int n2) {
    if ((n1 >= 100 && n1 <= 200) || (n2 >= 100 && n2 <= 200)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y;
    printf("Input two integers:\n");
    scanf("%d %d", &x, &y);

    printf("%d\n", check(x, y));
    return 0;
}
