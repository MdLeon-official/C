#include <stdio.h>

int check(int n1, int n2, int n3) {
    if ((n1 >= 20 && n1 <= 50) || (n2 >= 20 && n2 <= 50) || (n3 >= 20 && n3 <= 50)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y, z;
    printf("Input three integers:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("%d\n", check(x, y, z));
    return 0;
}
