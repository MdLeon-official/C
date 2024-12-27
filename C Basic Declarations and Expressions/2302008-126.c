
#include <stdio.h>

int main() {
    float array_nums[7];
    int i;

    printf("Input 7 array elements:\n");

    for(i = 0; i < 7; i++) {
        scanf("%f", &array_nums[i]);
    }

    printf("\nArray positions that store a value less or equal to 0:\n");
    for(i = 0; i < 7; i++) {
        if(array_nums[i] <= 0) {
            printf("array_nums[%d] = %.1f\n", i, array_nums[i]);
        }
    }

    return 0;
}
