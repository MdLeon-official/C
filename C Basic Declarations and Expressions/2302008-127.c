
#include <stdio.h>
int main() {
    int array_nums[8];
    int i;
    int temp;

    printf("Input 8 array elements:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &array_nums[i]);
    }

    for(i = 0; i < 4; i++) {
        temp = array_nums[i];
        array_nums[i] = array_nums[7-i];
        array_nums[7-i] = temp;
    }

    printf("\nModified array:\n");
    for(i = 0; i < 8; i++) {
        printf("array_nums[%d] = %d\n", i, array_nums[i]);
    }
    return 0;
}
