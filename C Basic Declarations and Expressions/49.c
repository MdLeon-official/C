#include <stdio.h>
int main() {
    int array[7];
    int i;

    scanf("%d", &array[0]);

    for(i = 1; i < 7; i++) {
        array[i] = array[i-1] * 3;
    }

    for(i = 0; i < 7; i++) {
        printf("n[%d] = %d\n", i, array[i]);
    }

    return 0;
}
