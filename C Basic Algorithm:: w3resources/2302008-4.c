#include <stdio.h>
#include <stdlib.h>

int check(int n) {
    if (abs(n - 100) <= 10 || abs(n - 200) <= 10){
        return 1;
    }else {
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
