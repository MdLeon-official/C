#include <stdio.h>

int main() {
    int array_nums[10];
    int n, i;

    printf("Input an integer (2-10)\n");
    scanf("%d", &n);

    for(i = 0; i < 10; i++) {
        array_nums[i] = i % n;
    }

    for(i = 0; i < 10; i++) {
        printf("array_nums[%d] = %d\n", i, array_nums[i]);
    }

    return 0;
}
