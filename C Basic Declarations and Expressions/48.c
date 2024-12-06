#include <stdio.h>

int main() {
    int n[5];
    int i;
    for(i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        if(n[i] <= 0) {
            n[i] = 100;
        }
    }
    printf("\nArray values are:\n");
    for(i = 0; i < 5; i++) {
        printf("n[%d] = %d\n", i, n[i]);
    }
    return 0;
}
