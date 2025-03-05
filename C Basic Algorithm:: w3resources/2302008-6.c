#include <stdio.h>

int check(int t1, int t2) {
    if ((t1 < 0 && t2 > 100) || (t2 < 0 && t1 > 100)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x,y;
    printf("Input two integer:\n");
    scanf("%d %d", &x,&y);

    printf("%d\n", check(x,y));
    return 0;
}
