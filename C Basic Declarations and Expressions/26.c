#include <stdio.h>

int main() {
    int i;
    printf("Even numbers between 1 to 50: \n");

    for(i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
