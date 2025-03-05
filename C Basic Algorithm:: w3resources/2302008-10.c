#include <stdio.h>
#include <stdlib.h>

int check(int x, int y) {
    if (x == y){
        return 0;
    }

    int diff_x = abs(100 - x);
    int diff_y = abs(100 - y);

    if (diff_x < diff_y) {
        return x;
    }else{
        return y;
    }
}

int main() {
    int x, y;
    printf("Input two integers:\n");
    scanf("%d %d", &x, &y);
    printf("%d\n", check(x, y));
    return 0;
}
